#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("enter number:");
	scanf("%d",&a);
	printf("enter number:");
	scanf("%d",&b);
	printf("enter number:");
	scanf("%d",&c);
	printf("enter number:");
	scanf("%d",&d);
	printf("enter number:");
	scanf("%d",&e);
	printf("enter number:");
	scanf("%d",&f);
	if(a<b  &&  a<c  && a<d  &&  a<e && a<f)
	printf(" a smallest number=%d");
	if (b<a  &&  b<c && b<d && b<e && b<f )
	printf(" b smallest number=%d");
	if (c<a  &&  c<b && c<d && c<e && c<f)
	printf("c smallest number=%d");
	if (d<a  &&  d<b  &&  d<c && d<e && d<f)
	printf("d samllest number =%d");
	if (e<a  && e<b && e<c && e<d && e<f )
	printf("e smallest number =%d");
	if (f<a  && f<b && f<c && f<d && f<e)
	printf ("f smallest number =%d");
	return 0;
}
