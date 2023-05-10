def isprime(n):
    x=0
    for i in range(2,n):
        if n%i==0:
            return 1
    return 0
n=int(input("<请输入大于2的偶数>"))
tab=[]
a=0
b=0
for i in range(2,n):
    if isprime(i)==0 and isprime(n-i)==0:
        a=i
        b=n-i
    if i>n-i:
        break
print(a,b)