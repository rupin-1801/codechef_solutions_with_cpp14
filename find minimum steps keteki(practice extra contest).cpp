#include <stdio.h>

int main(void) {
	int x,y,i,j,onex=0,oney=0,twox=0,twoy=0,step=0;
	scanf("%d%d",&x,&y);
	int arr[x][y];
	for(i=0;i<x;i++)
	{
	    for(j=0;j<y;j++)
	    {
	        scanf("%d",&arr[i][j]);
	    }
	}
	for(i=0;i<x;i++)
	{
	    for(j=0;j<y;j++)
	    {
	        if(arr[i][j]==1)
	        {
	            onex=i;
	            oney=j;
	        }
	        else if(arr[i][j]==2)
	        {
	            twox=i;twoy=j;
	        }
	    }
	}
	if(twox<onex)
	{
	    while(twox<onex)
        {
         onex--;
	     step++;
	    }
	}
	else if(twox>onex)
	{
	    while(twox>onex)
        {
         onex++;
	     step++;
	    }
	}
	if(twoy<oney)
	{
	    while(twoy<oney)
        {
         oney--;
	     step++;
	    }
	}
	else if(twoy>oney)
	{
	    while(twoy>oney)
        {
         oney++;
	     step++;
	    }
	}
	printf("%d",step);
	return 0;
}

