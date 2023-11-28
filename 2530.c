#include <stdio.h>

int main(void)
{
	int start_h, start_m, start_s;
	int finish_h, finish_m, finish_s;
	int time;
	int plus_h = 0, plus_m = 0, plus_s = 0;
	
	scanf("%d %d %d",&start_h, &start_m, &start_s);
	scanf("%d", &time);
	plus_m = time / 60;
	plus_s = time % 60;
	
	if(plus_m >= 60)
	{
		plus_h = plus_m / 60;
		plus_m %= 60;
	}
	
	finish_h = start_h + plus_h;
	finish_m = start_m + plus_m;
	finish_s = start_s + plus_s;
	
	if(finish_s >= 60)
	{
		finish_m = finish_m +(finish_s / 60);
		finish_s  %= 60;
	}
	
	if(finish_m >= 60)
	{
		finish_h += (finish_m / 60);
		finish_m %= 60;
	}

	if(finish_h >= 24)
	{
		finish_h -= 24;
	}
	
	printf("%d %d %d", finish_h, finish_m, finish_s);
	
	return 0;
}
