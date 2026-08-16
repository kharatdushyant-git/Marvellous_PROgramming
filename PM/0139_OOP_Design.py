class Arithematic:

    def __init__(self, A, B):
        self.No1 = A
        self.No2 = B

    def Add(self):
        Ans = self.No1 + self.No2
        return Ans


    def Sub(self):
        Ans = self.No1 - self.No2
        return Ans

print("Enter Fisrt Number : ",end="")
value1= int(input())

print("Enter Second Number : ",end="")
value2 = int(input()) 

aobj = Arithematic(value1,value2)

Ret = aobj.Add()     
# interanlly get converted as this  := Ret = Add(aobj,value1,value2)  int
print("Addition is : ",Ret) 


Ret = aobj.Sub() 
print("Substraction is : ",Ret) 