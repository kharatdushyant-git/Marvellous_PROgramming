import sys

def main():

    if(len(sys.argv) == 2):
        if(sys.argv[1] == "--h" or sys.argv[1] == "--H"):
            print("This automation script is used to travel the directory")
            print("For better usage please check --u flag")

        elif(sys.argv[1] == "--u" or sys.argv[1] == "--U"):
            print("Please Execute the script as ")
            print("Python Filename.py DirectoryName")
            print("DirectoryName should be Absolute path")

        else:
            DirectoryName = sys.argv[1]
            print("Directory Name is : ",DirectoryName)

    else:
        print("invalid Number of Arguments")
        print("Please use --h and --u for more information")

if __name__ == "__main__":
    main()