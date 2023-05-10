stu={}
a=""
n=0
i=0
while True:
    a=input("<姓名>")
    if a=='p':
        break
    t=input("<语数英成绩>")
    t=t.split(",")
    t=[float(t[i]) for i in range(len(t))]
    stu[a]=t
    n=n+1
key=stu.keys()
print(f"<总人数>{n}")
sub1=0.0
sub2=0.0
sub3=0.0
for j in key:
    print(f"<{j}总分>{sum(stu[j])}")
    sub1+=stu[j][0]
    sub2+=stu[j][1]
    sub3+=stu[j][2]
print("<语文平均>%.1f"% (float(sub1)/float(n)))
print("<数学平均>%.1f"% (float(sub2)/float(n)))
print("<英语平均>%.1f"% (float(sub3)/float(n)))