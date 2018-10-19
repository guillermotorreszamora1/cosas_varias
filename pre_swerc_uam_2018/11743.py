d = [0,2,4,6,8,1,3,5,7,9]
casos = int(input())
for i in range (0,casos):
  a = input()
  sum_a = 0
  sum_b = 0
  for value in (0,2,5,7,10,12,15,17):
    sum_a = sum_a + d[int(a[value])]
  for value in (1,3,6,8,11,13,16,18):
    sum_b = sum_b + int(a[value])
  sum = sum_a + sum_b
  if sum%10 == 0:
    print("Valid")
  else:
    print("Invalid")
