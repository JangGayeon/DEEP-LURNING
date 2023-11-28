#include<stdio.h>

int main(void)
{
	int n,i,j,m;
	
	scanf("%d",&n);
	
	for(i = 0; i < n; i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(m=0;m<n-j;m++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
