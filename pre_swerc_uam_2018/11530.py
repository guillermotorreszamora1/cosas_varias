vale1 = 'adgjmptw '
vale2 = 'behknqux'
vale3 = 'cfilorvy'
vale4 = 'sz'

casos = int(input())
for i in range(1,casos+1):
    cadena = input()
    valor = 0;
    for a in cadena:
        if a in vale1:
            valor += 1
        if a in vale2:
            valor += 2
        if a in vale3:
            valor += 3
        if a in vale4:
            valor += 4
    print("Case #"+str(i)+": "+str(valor))
