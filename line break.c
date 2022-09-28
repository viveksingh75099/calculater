#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	for(i=1;i<=100;)
	{
		if(i==61)
		break;
		printf("%d\n",i);
		i++;
	}
	printf("end");
}
