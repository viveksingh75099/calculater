#include <stdio.h>
#include <conio.h>
int main()
{
	int a;
	printf("enter a numbers:");
	scanf("%d",&a);
	if (a>0)
	printf(" this is the positiv number =%d",a);
	if (a<0)
	printf (" this is the negativ number =%d",a);
	if (a==0)
	printf (" no positiv number and no negativ number=%d",a);
	
	return 0;
}
