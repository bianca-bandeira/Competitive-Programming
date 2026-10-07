n = int(input()) 
while(True): 
    n+=1
    year = set(str(n))
    if(len(year) == 4):
        print(n)
        break