n = int(input())
qtd = 1
aux = 0
while(aux < n):
    aux += 2**qtd
    qtd+=1
print(qtd)