d = 1500
i = 0
while 0 == 0:
    m = int(input("Minutos? "))
    s = int(input("Segundos? "))
    if m == 0 and s == 0:
        break
    i += 1    
    v = d / (60 * m + s)
    print("Corredor",i)
    print("Tiempo:",m,":",s)
    print("Velocidad media:",v,"m/s")