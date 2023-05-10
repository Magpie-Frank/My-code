temp=input("<请输入温度值>")
if temp[-1]=='C':
    print("{:.2f}F".format(float(temp[0:-1])*(9/5)+32))
elif temp[-1]=='F':
    print("{:.2f}C".format((float(temp[0:-1])-32)*5/9))
