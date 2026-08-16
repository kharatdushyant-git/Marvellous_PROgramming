class Demo:
    #class Variable
    value1 = 10
    value2 = 20

    def __init__(self):
        self.No1 = 11
        self.No2 = 21

    #instance method
    def fun(self):
        print("Inside Instance method named as fun : ")

        print("class Variable : ",self.No1)
        print("class variable : ",self.No2)

        print("instance variable : ",Demo.value1)
        print("instance variable : ",Demo.value2)

#Object Creation
dobj = Demo()
dobj.fun()     