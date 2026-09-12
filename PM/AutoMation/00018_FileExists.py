import os

def main():
    ret = os.path.exists("Demo.txt")

    if (ret == True):
        print("File is Present in Current directory")

    else:
        print("There is no such File")    

if __name__ == "__main__":
    main()
    