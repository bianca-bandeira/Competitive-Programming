n = int(input())
poema = []
for i in range(n):
    f = input()
    poema.append(f[::-1])

aux = poema[::-1]
for linhas in aux:
    print(linhas)