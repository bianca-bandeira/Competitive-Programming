import math
q = int(input())
for i in range(q):
    n = int(input())
    l = list(map(int, input().split()))
    resp = str(math.sqrt(sum(l)))
    if(resp[-1] != '0'):
        print("NO")
    else:
        print("YES")