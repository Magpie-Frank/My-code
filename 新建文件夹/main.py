N=input('<请输入一个整数>')
n=int(N)
h=0
for a in range(1,n):
    count=0
    for b in range(2,a):
        if  a%b==0:
            count=1
    if count==0:
        print(a,end='')
        h+=1
        if h%10==0:
            print('\n',end='')
        else: print('\t',end='')