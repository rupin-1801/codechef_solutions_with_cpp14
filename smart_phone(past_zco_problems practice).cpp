#include <stdio.h>
typedef long long int lld;
void heap(lld a[],lld n,lld i);
void heap(lld a[],lld n,lld i)
{
    lld swap,large=i,l=2*i+1,r=2*i+2;
    if((l<n)&&(a[l]>a[large]))
    {
        large=l;
    }
    if((r<n)&&(a[r]>a[large]))
    {
        large=r;
    }
    if(large!=i)
    {
        swap=a[i];
	    a[i]=a[large];
	    a[large]=swap;
	    heap(a,n,large);
    }
}
void sort(lld a[],lld n);
void sort(lld a[],lld n)
{
    lld swap;
    for(lld i=n/2-1;i>=0;i--)
       heap(a,n,i);
    for(lld i=n-1;i>=0;i--)
    {
        swap=a[i];
	    a[i]=a[0];
	    a[0]=swap;
	    heap(a,i,0);
    }
}
int main(void) {
	lld n,res,max=0;
	scanf("%lld",&n);
	lld a[n],i=0;
	while(i<n)
	{
	    scanf("%lld",&a[i]);
	    i++;
	}
	sort(a,n);
	i=0;
	while(i<n)
	{
        res=a[i]*(n-i);
	    if(res>max)
	    {
	        max=res;
	    }
	    i++;
	}
	printf("%lld",max);
	return 0;
}

