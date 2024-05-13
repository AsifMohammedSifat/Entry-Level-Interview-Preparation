class A:
    value = 0
    def __init__(self,value) -> None:
        self.value = value

    def display(self):
        print(self.value)



obj = A(5)

obj.display()

obj.value = 15
obj.display()

