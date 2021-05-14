#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if (a<b)
	{
		if (b>c)
		{
			printf("largest number is :%d",c);
		}
		else if (b>c)
		{
			printf("largest number is:%d",b);
			}
		}
		else
		{
			printf("largest number is:%d",a);
		}
			return 0;
	
}
