n = int(input())
l = []
for i in range(n):
    num = list(map(int, input().split()))
    num.sort()
    l.append(num)
m = 1
for i in range(3):
    menor = 1000000000000
    for j in range(n):
        if(l[j][i] < menor):
            menor = l[j][i]
    m *= menor
print(m)