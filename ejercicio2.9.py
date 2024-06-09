n = int(input("Inserte un número: "))
i = 1  
if n >= 1:
    print("1")
i += 1
while i <= n:
    aux = 0
    j = 1
    while j <= i:
        if i % j == 0:
            aux = aux + 1
        j += 1
    if aux == 2:
        print(i)
    i += 1
