num_produtores, total_esperado = map(int, input().split())
qtd_meloes = []
for n in range(num_produtores):
    qtd_meloes.append(int(input()))
total = sum(qtd_meloes)
if (total_esperado - total) <= 0:
    print('NADA PREOCUPANTE')
elif (total_esperado - total) > 5:
    print('MUITO PREOCUPANTE')
else:
    print('POUCO PREOCUPANTE')