sex=input("<性别>")
h=float(input("<身高>"))
w=int(input("<体重>"))
bmi=w/h/h
if sex=="男":
    if bmi < 20:
        print("偏瘦")
    elif 20 <= bmi <= 25:
        print("正常")
    elif bmi > 25:
        print("超重")
elif sex=="女":
    if bmi < 18:
        print("偏瘦")
    elif 18 <= bmi <= 23:
        print("正常")
    elif bmi > 23:
        print("超重")