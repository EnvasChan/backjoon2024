l = [-1 for _ in range(26)]
s = input()
for j in range(len(s)):
    n = ord(s[j]) - 97
    if(l[n] != -1):
        continue
    l[n] = j

print(*l, end=" ")