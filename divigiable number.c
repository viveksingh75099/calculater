#include <stdio.h>
#include <conio.h>
int main()
{
	int a;
	printf("enter a numbers:");
	scanf("%d",&a);
	if (a%9==0)
	printf(" divigiable number =%d",a);
	if (a%9!=0)
	printf (" not divigiabe number =%d",a);
	
	return 0;
}
