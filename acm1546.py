input()
n = list(map(int,input().split()))
m = int(max(n))
def modify(q):
    return q/m*100
ans = list(map(modify,n))
print(sum(ans)/len(ans))