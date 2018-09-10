
from math import gcd
class Rational:
    # default and parameterized constructor
    def __init__(self, n = 1, d = 1):
        self.num = n
        self.deno = d
        if d == 0:
            print("Denominator is assigned zero")
        else:
            self.Reduction()

    def Reduction(self):
        gcdOfTwo = gcd(self.deno, self.num)
        self.deno = int(self.deno /  gcdOfTwo)
        self.num = int(self.num /  gcdOfTwo)

    def sum(self, other):
        sumNum = self.num*other.getDeno() + self.deno*other.getNum()
        sumDeno = self.deno*other.getDeno()
        sum = Rational(sumNum, sumDeno)
        return sum

    def sub(self, other):
        subNum = self.num*other.getDeno() - self.deno*other.getNum()
        subDeno = self.deno*other.getDeno()
        sub = Rational(subNum, subDeno)
        return sub

    def mul(self, other):
        mulNum = self.num*other.getNum()
        mulDeno = self.deno*other.getDeno()
        mul = Rational(mulNum, mulDeno)
        return mul
    def div(self, other):
        divNum = self.num*other.getDeno()
        divDeno = self.deno*other.getNum()
        div = Rational(divNum, divDeno)
        return div
    def getNum(self):
        return self.num
    def getDeno(self):
        return self.deno
    def printRational(self):
        print("The Rational Form is : {}/{}".format(self.num, self.deno))
    def printFractional(self):
        fract = float(self.num) / float(self.deno)
        print("The Fractional Form is : {}".format(fract))


num1 = input("Enter the numerator for first : ")
deno1 = input("Enter the denominator for first : ")
num2 = input("Enter the numerator for denominator : ")
deno2 = input("Enter the denominator for denominator : ")

r1 = Rational(int(num1), int(deno1))
r2 = Rational(int(num2), int(deno2))
sum = r1.sum(r2)
sub = r1.sub(r2)
mul = r1.mul(r2)
div = r1.div(r2)


print("After summation :- ")
sum.printRational()
sum.printFractional()

print("After subtraction :- ")
sub.printRational()
sub.printFractional()

print("After multiplication :- ")
mul.printRational()
mul.printFractional()

print("After division :- ")
div.printRational()
div.printFractional()
