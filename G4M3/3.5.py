tam = int(input())
gfm = []
while (len(gfm) < tam):
    n = int(input())
    if(n == 0):
        maior = max(gfm)
        print(maior)
        idx = gfm.index(maior)
        gfm.pop(idx)
    else:
        gfm.append(n)