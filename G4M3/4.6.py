n = list(map(int, input().split()))

rodadas = 0
while True:
    qtd_1 = n.count(1)
    if(qtd_1 == len(n)):
        break
    for i in range(len(n)):
        if n[i] == 1:
            continue
        elif n[i]%2==0:
            n[i] = n[i] // 2
        else:
            n[i] = n[i]+1
    rodadas+=1
print(rodadas)