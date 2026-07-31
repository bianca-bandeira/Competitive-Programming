n = int(input())
mat = []
h = []
for i in range(n+2):
    h.append('!')
mat.append(h)
for i in range(n):
    a = ['!']
    linha = input()
    for c in linha:
        a.append(c)
    a.append('!')
    mat.append(a)
h = []
for i in range(n+2):
    h.append('!')
mat.append(h)

for i in range(1,n+1):
    for j in range(1,n+1):
        qtd = 0
        if(mat[i][j] == '*'):
            mat[i][j] = '9'
        else:
            if mat[i][j-1] == '*' or mat[i][j-1] == '9':
                qtd+=1 
            if mat[i][j+1] == '*' or mat[i][j+1] == '9':
                qtd+=1
            if mat[i-1][j] == '*' or mat[i-1][j] == '9':
                qtd+=1
            if mat[i+1][j] == '*' or mat[i+1][j] == '9':
                qtd+=1
            if mat[i+1][j-1] == '*' or mat[i+1][j-1] == '9':
                qtd+=1
            if mat[i+1][j+1] == '*' or mat[i+1][j+1] == '9':
                qtd+=1
            if mat[i-1][j+1] == '*' or mat[i-1][j+1] == '9':
                qtd+=1
            if mat[i-1][j-1] == '*' or mat[i-1][j-1] == '9':
                qtd+=1
            mat[i][j] = str(qtd)

for i in range(1,n+1):
    l = mat[i]
    print("".join(l[1:n+1]))