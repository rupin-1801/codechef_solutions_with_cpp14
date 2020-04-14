#include <stdio.h>

int main(void) {
	int wm=0;
	float in=0.00;
	scanf("%d%f",&wm,&in);
	float res=0.00;
	if((wm%5==0)&&(wm+0.50<=in))
	{
	    res=in-(wm + 0.50);
	    printf("%.2f",res);
	}
	else
	{
	    printf("%.2f",in);
	}
	return 0;
}

