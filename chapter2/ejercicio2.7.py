n1 = int(input("Inserte el primer número: "))
n2 = int(input("Inserte el segundo número: "))
n3 = int(input("Inserte el tercer número: "))
if (n1 + n2 == n3) or (n2 + n3 == n1) or (n1 + n3 == n2):
    r = True
else: 
    r = False
print(r)