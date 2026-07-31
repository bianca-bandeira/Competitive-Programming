tiro = 0
pos = 0
while True:
    ft = input()
    cont = 0
    for i in range(len(ft)):
        if(ft[i] == "O"):
            cont += 1
    if(cont == len(ft)):
        print(f"Vitória com {tiro} melões!")
        break

    if(ft[pos] == 'X'):
        print("Silêncio...")
    else:
        if(pos == 0):
            if(ft[pos+1] == 'O'):
                pos+=1
                print(f"Correndo pro esconderijo {pos}!")
            else:
                tiro+=1
                print("Tiro de Melão!!!")
        elif(ft[pos+1] == "X" and ft[pos-1] == "O"):
            pos-=1
            print(f"Correndo pro esconderijo {pos}!")
        elif(ft[pos-1] == "X" and ft[pos+1] == "O"):
            pos+=1
            print(f"Correndo pro esconderijo {pos}!")
        else:
            tiro+=1
            print("Tiro de Melão!!!")