texto = input()
novo_texto = ""
contador = 0
for i in range(len(texto)-1):
    if texto[i] != "P":
        novo_texto += texto[i]
    else:
        novo_texto += ""
        if texto[i] == texto[i+1]:
            contador += 1
        if contador >= 2:
            novo_texto += "P"
            contador = 0

print(novo_texto + texto[-1])