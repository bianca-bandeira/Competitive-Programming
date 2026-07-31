n = int(input())
mat = []
freq = {"+": 0, "o": 0, "-": 0}
for i in range(n):
    linha = list(map(int, input().split()))
    mat.append(linha)
for i in range(n):
    for j in range(n):
        if(mat[i][j] <= 90):
            mat[i][j] = "+"
            freq["+"]+=1
        elif(mat[i][j] <= 100):
            mat[i][j] = "o"
            freq["o"]+=1
        else:
            mat[i][j] = "-"
            freq["-"]+=1
for l in mat:
    print("".join(l))
print()
for k,v in freq.items():
    print(f"{k}: {v}")