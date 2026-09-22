##################################################################################################################################
#
#                             % LOGIC  for command prompt%
#
#   python 00048_PROcessSurvillence.py       2            Marvellous
#   python 00048_PROcessSurvillence.py   Time_Interval    Folder_Name
#                0                           1                2
#
#   len(sys.argv) -> 3
#
#   python 00048_PROcessSurvillence.py   --h
#   python 00048_PROcessSurvillence.py   --u
#                    0                 1
#
#   len(sys.argv) -> 2
#
###################################################################################################################################


###################################################################################################################################
#
#   Importing Neccesary Third party ackage
#
###################################################################################################################################

import psutil
import os
import sys
import time
import schedule

###################################################################################################################################
#
#   Funtion name : PlateformSurvillance
#   Function work : Create Folder and Add Log file in it
#
###################################################################################################################################


def PlateformSurvillance(Folder_Name):
    Border = "-"*65

    Ret = False

    Ret = os.path.exists(Folder_Name)

    if(Ret == True):
        Ret = os.path.isdir(Folder_Name)
        if(Ret == False):
            print("Unable to proceed as directory name is existing but its not directory")
            return 

    else:
        os.mkdir(Folder_Name)
        print("Directory for log file get's created successfully")   

#  is code gtes here that means you have folder comfirmly

    timestamp = time.strftime("%Y - %m - %d_%H - %M - %S")

    FileName = os.path.join(Folder_Name , "Marvellous_%s.Log" %timestamp)

    fobj = open(FileName,"w")

    print(f"Log File get's Succesfully craeted with name : {FileName}")

    fobj.write(Border+"\n")
    fobj.write("--------- Marvellous Plateform Survellience System -----------\n")
    fobj.write(Border+"\n")
    fobj.write("Log get's created at : "+timestamp+"\n")
    fobj.write(Border+"\n\n")

    fobj.write("---------------------- System Report -------------------------\n")


    # CPU
    fobj.write("Number of Active CPU cores : %s\n" %psutil.cpu_count())

    fobj.write("CPU usage : %s %%\n" %psutil.cpu_percent())

    fobj.write(Border+"\n")



    # RAM information
    memory = psutil.virtual_memory()

    fobj.write(f"RAM usage : {memory.percent} %\n")

    fobj.write(f"Total RAM Available : {memory.total}\n" )

    fobj.write(Border+"\n")



    # Network usage
    netobj = psutil.net_io_counters()

    fobj.write(f"Network usage Report :\n" )
    fobj.write("Sent : %.2f MB\n" %(netobj.bytes_sent / (1024 * 1024)))
    fobj.write("Receive : %.2f MB\n" %(netobj.bytes_recv / (1024 * 1024)))

    fobj.write("\n\n\n\n\n\n\n\n\n\n")

    fobj.write(Border+"\n")
    fobj.write("---------------------- End of Log File -----------------------\n")
    fobj.write(Border+"\n")

    fobj.close()

def main():
    Border = "-"*60
    print(Border)
    print("--------- Marvellous Plateform Survellience System ---------")
    print(Border)

    # --u & --h handling
    if(len(sys.argv) == 2):
        if(sys.argv[1] == "--h" or sys.argv[1] == "--H"):
            print("This Automation sript is used to perform")
            print("1 : It fetch the information of running process")
            print("2 : It fetch the information of primary storage as RAM")
            print("3 : It fetch the information of Secondary storage HDD")
            print("4 : It fetch the information of About the MicroPROcessor")
            print("5 : It get's Auto scheduled periodically")
            print("6 : It maintian all records into log file")
            print("7 : It sends the log file thorugh mail periodically")

        elif(sys.argv[1] == "--u" or sys.argv[1] == "--U"):
            print("Use the Automation Script as : ")
            print(f"Python {sys.argv[0]} Time_Interval Folder_Name")
            print("Time_Interval : Time in minute for periodic execution")    
            print("Folder_Name : name of Folder for the log file creation")   

        else:
            print("Unable to proceed As No matchingg Arguments")
            print("Please use --u Or --h flag for getting more details")

    # Acutal Project code
    elif(len(sys.argv) == 3):

        # print("CPU Usage : ",psutil.cpu_percent())
        print("Scheduler Started succesfully ")
        print("Press Ctrl + c to abort the Automation")
        schedule.every(int(sys.argv[1])).minutes.do(PlateformSurvillance , (sys.argv[2]))

        while True:
            schedule.run_pending()
            time.sleep(1)

    else:
        print("Invalid Number of Arguments")    
        print("Unable to proceed as Arguments are not matching")    
        print("Please use --u Or --h flag for getting more details")    

    print(Border)
    print("---------- Thanks for Using our Automation System ----------")
    print(Border)

if __name__ == "__main__":
    main()