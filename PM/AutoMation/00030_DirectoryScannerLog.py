import sys
import os

def DirectoryScanner(DirectoryPath):
    
    print("Check the Marvellous log text file ")

    fobj = open("MarvellousLog.txt","w")

    fobj.write("Marvellous Automation Script\n")

    fobj.write("Files from the directory are : \n")

    for FolderName, SubFolder, FileName in os.walk(DirectoryPath):
        for fname in FileName:
            fobj.write(fname+"\n")

    fobj.close()

def main():

    Border = "-"*40
    print(Border)
    print(" Marvellous Automation Script")
    print(Border)

    if(len(sys.argv) == 2):
    
        if(sys.argv[1] == "--h" or sys.argv[1] == "--H"):
            print("This automation script is used to travel the directory")
            print("For better usage please check --u flag")

        elif(sys.argv[1] == "--u" or sys.argv[1] == "--U"):
            print("Please Execute the script as ")
            print("Python Filename.py DirectoryName")
            print("DirectoryName should be Absolute path")

        else:
            DirectoryScanner(sys.argv[1])

    else:
        print("invalid Number of Arguments")
        print("Please use --h or --u for more information")

    print("\n")
    print(Border)    
    print(" Thanks for using Marvellous Automation Script")
    print(Border)    

if __name__ == "__main__":
    main()