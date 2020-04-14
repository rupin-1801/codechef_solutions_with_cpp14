#include <stdio.h>

int main(void) {
	int t,n,h,y1,y2,l;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d%d%d%d",&n,&h,&y1,&y2,&l);
	    int x[n],t[n],c=0;
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d%d",&t[i],&x[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        if((t[i]==1)&&(x[i]<h-y1))
	        {
	            l--;
	        }
	        else if((t[i]==2)&&(x[i]>y2))
	        {
	            l--;
	        }
	        if(l==0)
	        break;
	        c++;
	    }
	    printf("%d\n",c);
	}
	return 0;
}

