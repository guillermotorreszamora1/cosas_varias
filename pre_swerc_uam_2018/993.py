casos = int(input())
for j in range(0,casos):
    d = []
    for i in range(0,10):
      d.append(0)
    numero = int(input())
    if numero != 1:
        for factor in range(9,1,-1):
            while numero % factor == 0:
                numero = numero/factor;
                d[factor] = d[factor] + 1
        if numero == 1:
            salida = ""
            for factor in range(2,10):
              for i in range(0,d[factor]):
                  salida = salida + str(factor)
            print(salida)
        else:
            print("-1")
    else:
        print("1")
