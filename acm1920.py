import sys
input = sys.stdin.readline

n = input()
ln = set(map(int,input().split()))
m = int(input())
lm = list(map(int,input().split()))
for i in range(m):
    if lm[i] in ln:
        print(1)
    else:
        print(0)