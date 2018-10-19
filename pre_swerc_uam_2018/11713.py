numero = int(input())
for i in range(0,numero):
    cadena1 = input()
    cadena2 = input()
    if(len(cadena1)==len(cadena2)):
      igual = True
      for i in range(0,len(cadena1)):
        if cadena1[i] not in 'aeiou':
          if cadena1[i] != cadena2[i]:
            igual = False
    else:
      igual = False
    if igual == True:
      print("Yes")
    else:
      print("No")
