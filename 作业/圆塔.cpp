#include <stdio.h>
#include <math.h>
int main()
{
	float x1,y1;
	void isatcircle(float x,float y);
	printf("请输入横纵坐标：");
	scanf("%f %f",&x1,&y1);
	isatcircle(x1,y1);
	return 0;
}

void isatcircle(float x,float y)
{
	float distance;
	x=fabs(x);
	y=fabs(y);
	distance=sqrt((x-2.0)*(x-2.0)+(y-2.0)*(y-2.0));
	if(distance>1) printf("该位置高度为0米");
	else printf("该位置高度为10米");
}
