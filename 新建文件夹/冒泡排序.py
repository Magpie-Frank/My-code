a=input('<请输入数列>')
tab=a.split()
tab=[float(tab[i]) for i in range(len(tab))]
for i in range(len(tab)-1):
    for j in range(len(tab)-1-i):
        if tab[j]>tab[j+1]:
            tab[j],tab[j+1]=tab[j+1],tab[j]
    print(tab)