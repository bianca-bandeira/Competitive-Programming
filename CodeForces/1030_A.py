n = int(input())
l = list(map(int, input().split()))
print("HARD\n") if (sum(l) >= 1) else print("EASY")