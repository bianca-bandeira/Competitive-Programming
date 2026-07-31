num_sensores, referencia = map(int, input().split())
valores = list(map(int, input().split()))
for v in range(len(valores)):
    if valores[v] > referencia:
        valores[v] = 0
    else:
        valores[v] = 1
for teste in valores:
    print(teste)