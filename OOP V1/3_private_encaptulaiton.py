class A:
    _value = 0
    def __init__(self,value) -> None:
        self._value = value

    def display(self):
        print(self._value)



obj = A(5)
obj.display()

obj._value = 15
obj.display()

print(obj.__dict__)



