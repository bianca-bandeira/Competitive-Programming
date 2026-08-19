q = int(input())
for i in range(q):
    a,b = map(int,input().split())
    a = a-1
    b = b-1
    print(((b//a)+b+1))