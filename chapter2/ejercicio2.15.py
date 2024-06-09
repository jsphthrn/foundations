i = float(input("Inserte el valor de inversión incial: "))
r = float(input("Inserte el valor de la tasa de interés anual aplicable (en procentaje): "))
m = int(input("Inserte el número de días de inversión: "))
j = 1
o = i
r = r / 100
while j <= m:
    i = i * (1+ r / 365)
    j += 1
print("Inversión inicial:", o)
print("Saldo al final del periodo:", i)