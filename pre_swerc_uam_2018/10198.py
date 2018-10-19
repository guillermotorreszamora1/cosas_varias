t = [1, 2, 5]
for i in range(3,1010):
  t.append(t[i-1]*2 + t[i-2]+t[i-3])
while(True):
    try:
      n = int(input())
      print(t[n])
    except EOFError:
      break
