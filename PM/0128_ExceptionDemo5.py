def main():
    Ans = 0

    try :
        print("Enter first Number : ",end="")
        No1 = int(input())

        print("Enter Second Number : ",end="")
        No2 = int(input())

        Ans = No1 /No2

        print("Division is Successful")

    except Exception as eobj:
        print("Exception occured : ",eobj)           

    print("Result is : ",Ans)

if __name__ == "__main__":
    main()    