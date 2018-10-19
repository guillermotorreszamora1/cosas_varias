tabla = []
tabla.append(1)
tabla.append(1)
for i in range(2,60):
  tabla.append(tabla[i-1] + tabla[i-2])
while True:
    n = int(input())
    if n == 0:
        break;
    print(tabla[n])
