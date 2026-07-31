num_sensores = int(input())
lista_sensores = []
qtd_armadilhas = 0
contador = 1
for i in range(num_sensores):
    lista_sensores.append(int(input()))

for i in range(num_sensores):
    if lista_sensores[i] == 1 and (i == 0 or lista_sensores[i-1] == 0):
        qtd_armadilhas += 1

print(qtd_armadilhas)