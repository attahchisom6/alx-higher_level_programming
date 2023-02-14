class A:
    def __init__(self, name):
        self.name = name
 
 
class B(A):
    def __init__(self, roll):
        self.roll = roll
 
 
object = B("car")
print(object.name)
