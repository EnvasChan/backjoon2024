while True:
    s = list(map(int,input().split()))
    if s[0] == 0 and s[1] == 0 and s[2] == 0:
        break
    if s[0]**2 + s[1]**2 == s[2]**2 or s[0]**2 + s[2]**2 == s[1]**2 or s[2]**2 + s[1]**2 == s[0]**2 :
        print('right')
    else:
        print('wrong')
    
        
