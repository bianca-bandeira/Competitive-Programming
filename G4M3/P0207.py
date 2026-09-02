n = int(input())
mat = ['0']*n
for i in range(n):
    qtd = 0
    inp = input()
    s = list(map(int,inp.split()))
    qtd = s.count(0)
    mat[(n-qtd)-1] = inp
for l in mat:
    print(l)
