class Animal:
    def __init__(self,name) -> None:
        self.name = name
    def eat(self):
        print(self.name, "Can Eat")
            
class Cat(Animal):
    def __init__(self, name) -> None:
        # super().__init__(name)
        Animal.__init__(self,name)

obj = Cat("Cat")
obj.eat()

