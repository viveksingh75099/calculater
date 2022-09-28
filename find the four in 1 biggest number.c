#include<stdio.h>
#include<conio.h>
int main()
{

	int a,b,c,d,big;
	printf("enter the four numbers:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
	big=a;
	else
	big=b;
	if(c>big)
	big=c;
	if(d>big)
	big=d;
	printf("this is thr biggest number=%d",big);
	return 0;
}
