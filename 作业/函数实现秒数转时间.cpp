#include <stdio.h>
#include <math.h>

void TimeOutput(int hour, int minute, double second);
void ToHms(int *hour, int *minute, double *second, double total);

int main()
{
    int h, m;
    double s, t;
    scanf("%lg", &t);
    ToHms(&h, &m, &s, t);
    TimeOutput(h, m, s);
    return 0;
}

void TimeOutput(int hour, int minute, double second)
{
    //...(ÂÔ)...
}

void ToHms(int *hour, int *minute, double *second, double total)
{
	*second=(int)total%60+total-(int)total;
	*minute=(int)total/60%60;
	*hour=(int)total/3600;
}
