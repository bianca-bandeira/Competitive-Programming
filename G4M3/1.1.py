pes_melao = int(input())
colheu = int(input())
qtd_produzido = int(input())

qtd_meloes = pes_melao * qtd_produzido
if qtd_meloes <= colheu:
    print('NAO')
else:
    print('SIM')