from itertools import permutations
li=[i for i in range(100) if i%8==0]
abc=[]
len1=len(li)
for i in range(len1):
    k=str(li[i])
    k=k[::-1]
    li.append(int(k))


for _ in range(int(input())):
    n=input()
    k=[]
    if(int(n)<=100):
        if(int(n) in li):
            print("YES")
            
        else:
            print("NO")
        continue

    l=len(n)
    for i in n:
        k.append(i)
    
    perm = permutations(k, 3) 
    
    flag=0
    for i in list(perm):
        m="".join(i)
        
        if(int(m)%8==0):
            print("YES")
            flag=1
            break
    if(not flag):
        print("NO")
