#include <stdio.h>
#include <conio.h>
 int main()
{
	int a,b;

 printf("enter numbers a: ");
 scanf("%d",&a);
 printf("enter numbers b: ");
 scanf("%d",&b);
 if(a<b)
 printf(" a smallest number=%i");
 if (b<a)
 printf("b smallest  number=%i");
 if(a==b)
  printf("both are equel value=%i");
 return 0;
}
