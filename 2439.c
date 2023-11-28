#include<stdio.h>

int main(void)
{
	int num,i,j,cnt,m;
	
	scanf("%d",&num);
	cnt = num;
	for(i=0; i<num;i++)
	{
		for(j=0;j<(cnt-i-1);j++)
		{
			printf(" ");
		}
		for(m=0;m<(cnt-j);m++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
