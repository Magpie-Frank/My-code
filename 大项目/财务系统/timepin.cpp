#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
struct tm timepin()
{
	time_t now;
	time(&now);
	return *localtime(&now);
}
