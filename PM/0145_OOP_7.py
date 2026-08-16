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

    @classmethod
    def gun(cls):
        print("Inside Instance method named as gun : ")

        #print("class Variable : ",Demo.No1)           Not Allowed
        #print("class variable : ",Demo.No2)           Not Allowed

        print("instance variable : ",cls.value1)
        print("instance variable : ",cls.value2)

    @staticmethod
    def sun():
        print("Inside Instance method named as sun : ")

        print("instance variable : ",Demo.value1)
        print("instance variable : ",Demo.value2)  

Demo.sun()