class Demo:
    #class Variable
    value1 = 10
    value2 = 20

    def __init__(self):
        self.No1 = 11
        self.No2 = 21

obj1 = Demo()
obj2 = Demo()

obj1.No1 = 0

print(obj1.No1)         # 0
print(obj2.No1)         # 11

obj1.value1 = 0

print(Demo.value1)

Demo.value1 = 0

print(Demo.value1)