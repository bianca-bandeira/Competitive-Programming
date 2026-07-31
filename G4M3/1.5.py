c = int(input())
soma_m = 0
soma_g = 0
while True:
    f,m,g = input().split()
    f,m,g = int(f), int(m), int(g)

    if f == 0 and m == 0 and g == 0:
        break

    if c >= f:
        m,g = 0,0
    else:
        soma_m += m
        soma_g += g

    print(f'Meloes roubados: {soma_m}')
    print(f'Goblins resgatados: {soma_g}')
    print('---')