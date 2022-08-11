#include <stdio.h>
int main ()
{
	int i,h,k;
	printf("Enter the Pyramid's Height : ");
	scanf("%d",&h);
	for (i=1;i<=h;i++)
	{
		for(k=i;k<h;k++)
		{
			printf(" ");
		}
			
		for(k=1;k<=(2*i-1);k++)
		{
			printf("x");
		}
		printf("\n");
	}	
		return 0;
}