n=int(input())
for i in range(n):
    c=0
    a,b=map(int,input().split())
    for j in range(a,b+1):
        if(j%10==2 or j%10==3 or j%10==9):
            c+=1
    print(c)
