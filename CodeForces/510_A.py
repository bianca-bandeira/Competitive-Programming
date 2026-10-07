n,m = map(int, input().split())
resp = []
aux = True
for i in range(n):
    if (i%2==0):
        resp.append('#'*m)
    elif(aux):
        l = ('.' * (m-1))+'#'
        resp.append(l)
        aux = False
    else:
        l = '#'+('.' * (m-1))
        resp.append(l)
        aux = True
for c in resp:
    print(c)