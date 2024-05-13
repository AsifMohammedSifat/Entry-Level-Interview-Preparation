class A:
    value = 0
    def __init__(self,value) -> None:
        self.value = value
        print("I am Constructor")

    def display(self):
        print("Hello")

    def __str__(self) -> str:
        return "I am Class A"
    def __del__(self):
        print("I am Destructor")

obj = A(5)
obj.display()
# obj.value = 5
# print(obj.value)

# print(obj)
