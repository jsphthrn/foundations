num1 = int(input("Inserte el primer número: "))
num2 = int(input("Inserte el segundo número: "))
if num1 > num2:
    a = num1
    b = num2
else:
    a = num2
    b = num1
while b > 0:
    r = a % b
    a = b
    b = r
print("mcd(",num1,",",num2,") =",a)
