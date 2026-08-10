def Add(No1, No2):
    Ans = No1 + No2

    return Ans

def Sub(No1, No2):
    Ans = No1 - No2

    return Ans    


print("Enter Fisrt Number : ",end="")
value1= int(input())

print("Enter Second Number : ",end="")
value2 = int(input())   

Ret = Add(value1,value2)
print("Addition is : ",Ret) 

Ret = Sub(value1,value2)
print("Substraction is : ",Ret) 