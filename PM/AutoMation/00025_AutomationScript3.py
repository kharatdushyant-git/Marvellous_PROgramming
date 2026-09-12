# PM Automation.py --h
# PM Automation,py --u
# PM Automation.py Marvellous

# PM Automation.py --d
# PM Automation.py Marvellous Demo

import sys

def main():

    if(len(sys.argv) == 2):
        if(sys.argv[1] == "--h" or sys.argv[1] == "--H"):
            print("Help")

        elif(sys.argv[1] == "--u" or sys.argv[1] == "--h"):
            print("Usage")

        else:
            DirectoryName = sys.argv[1]
            print("Directory Name is : ",DirectoryName)

    else:
        print("invalid Number of Arguments")
        print("Please use --h and --u for more information")

if __name__ == "__main__":
    main()