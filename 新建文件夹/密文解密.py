a=[]
ming=input("<密文>")
l=len(ming)
ming.split(' ')
i=int(1)
for i in range(0,l):
    a.append('0')
if l%2==0:
    n=int(l/2)
else: n=int((l-1)/2)
for i in range(0,n):
    a[2*i+1]=ming[i]
for i in range(n,l):
    a[(i-n)*2]=ming[i]
for i in range(0,l):
    print(a[i],end='')