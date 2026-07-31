num = int(input())
nomes = []
for i in range(num):
  nome = input()
  if nome not in nomes:
    nomes.append(nome)
    
for n in nomes:
  print(n)