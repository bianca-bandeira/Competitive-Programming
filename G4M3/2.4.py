l1 = input().split()
l2 = input().split()
l3 = input().split()
l4 = input().split()

t1=len(l1)-1
t2=len(l2)-1
t3=len(l3)-1
t4=len(l4)-1

cont = 0
# print(l1[t1][-1])

rima = False

if(l1[t1][-1] == l3[t3][-1]):
  rima = True

if(rima):
  for i in range(1,len(l1[t1])+1):
    if(l1[t1][-i] == l3[t3][-i]):

      cont+=1

rima = False

if(l2[t2][-1] == l4[t4][-1]):
  rima = True

if(rima):
  for j in range(1,len(l2[t2])+1):
    if(l2[t2][-j] == l4[t4][-j]):
      cont+=1
print(cont)