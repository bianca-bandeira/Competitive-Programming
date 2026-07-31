n = int(input())
qtd = 0
for i in range(n):
    frase = input()
    maiusculo = frase.upper()
    if "FADA" in maiusculo:
        qtd += 1
print(qtd)