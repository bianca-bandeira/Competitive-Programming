n = int(input())
prioridade = []
for i in range(n):
    num = int(input())
    prioridade.append(num)
prioridade.sort()
for x in prioridade:
    print(x)