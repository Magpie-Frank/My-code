with open('py8in_2022011074.daz','r')as f:
    f=f.readline()
lst=f.split('X')
while '' in lst:
    lst.remove('')
lst=[int(x,base=16) for x in lst]
print(lst)

