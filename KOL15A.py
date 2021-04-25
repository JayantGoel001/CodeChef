# cook your dish here
n=int(input())
for i in range(n):
    s=0
    st=list(input())
    for i in range(len(st)):
        x=ord(st[i])
        if(x>=48 and x<=57):
            s+=ord(st[i])-ord('0')
    print(s)