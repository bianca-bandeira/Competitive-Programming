n = int(input())
qtd = 0
for i in range(n):
    x,y = map(int, input().split())
    if(y - x >= 2):
        qtd+=1
print(qtd)