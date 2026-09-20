# python 00048_PROcessSurvillence.py       2            Marvellous
# python 00048_PROcessSurvillence.py   Time_Interval    Folder_Name
#                0                           1                2
#
# len(sys.argv) -> 3

# python 00048_PROcessSurvillence.py   --h
# python 00048_PROcessSurvillence.py   --u
#                    0                 1

# len(sys.argv) -> 2

import psutil
import os
import sys

def PlateformSurvillance(Folder_Name):
    Border = "-"*60

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
        PlateformSurvillance(sys.argv[2])

    else:
        print("Invalid Number of Arguments")    
        print("Unable to proceed as Arguments are not matching")    
        print("Please use --u Or --h flag for getting more details")    

    print(Border)
    print("--------- Thanks for Using our Automation System ---------")
    print(Border)

if __name__ == "__main__":
    main()