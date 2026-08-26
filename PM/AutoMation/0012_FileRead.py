def main():
    try:
        fobj = open("Demo.txt","r")

        print("File gets opened !!!!")

        data = fobj.read(10)

        print(data)
        
        fobj.close()

    except FileNotFoundError as fobj:

        print("File is not present current Directory")   

if __name__ == "__main__":
    main()