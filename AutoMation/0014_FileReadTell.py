def main():
    try:
        fobj = open("Demo.txt","r")

        print("File gets opened !!!!")

        print("File offset is : ",fobj.tell())
        data = fobj.read()

        print(data)
        print("File offset is : ",fobj.tell())
        
        fobj.close()

    except FileNotFoundError as fobj:

        print("File is not present current Directory")   

if __name__ == "__main__":
    main()