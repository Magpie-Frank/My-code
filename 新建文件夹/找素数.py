n=int(input("<请输入整数>"))
sum=0
for a in range(2,n):
    x=1
    for b in range(2,a//2+1):
        if a%b==0:
            x=0
            break
    if x==1:
        print("%d"%a,end='')
        sum=sum+1
        if sum%10==0:
            print("\n",end='')
        else: print("\t",end='')