l,c = map(int, input().split())
mat = []
for i in range(l):
    linha = list(input().split())
    mat.append(linha)
qtde = 0
for x in mat:
    qtd = x.count("1")
    if qtd != 0:
        x.append("M")
        qtde+=1
    else:
        x.append("-")

coluna = []
for i in range(c):
    aux = 0
    for j in range(l):
        if mat[j][i] == "1":
            aux+=1
    if aux > 0:
        coluna.append("M")
    else:
        coluna.append("-")
qtde += coluna.count("M")
mat.append(coluna)
print(qtde)
for linhas in mat:
    print(" ".join(linhas))