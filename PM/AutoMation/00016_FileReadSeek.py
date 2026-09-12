# seek(kuthe , kuthon)
#kuthon : 0/1/2

# 0 starting
# 1 current
# 2 end

def main():
    try:
        fobj = open("Demo.txt","r")

        print("File gets opened !!!!")

        fobj.seek(10,0)

        data = fobj.read()

        print(data)

    except FileNotFoundError as fobj:

        print("File is not present current Directory")   

if __name__ == "__main__":
    main()