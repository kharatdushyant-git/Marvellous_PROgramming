class Arithematic:

    def Add(self,No1, No2):
        Ans = No1 + No2
        return Ans


    def Sub(self,No1, No2):
        Ans = No1 - No2
        return Ans

aobj = Arithematic()

print("Enter Fisrt Number : ",end="")
value1= int(input())

print("Enter Second Number : ",end="")
value2 = int(input())   

Ret = aobj.Add(value1,value2)     
# interanlly get converted as this  := Ret = Add(aobj,value1,value2)  int
print("Addition is : ",Ret) 


Ret = aobj.Sub(value1,value2) 
print("Substraction is : ",Ret) 
