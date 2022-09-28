#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	a=5; b=1;
	rohan:	 
	if(b<=10)
	printf("%d\n",a*b);
    b=b+1;
	goto rohan;
	return 0;
}
