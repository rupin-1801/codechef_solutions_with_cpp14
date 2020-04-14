#include <stdio.h>
typedef long long int lld;
int main()
{
    lld n,c,h,flag=1;
    scanf("%lld%lld",&n,&h);
    lld a[n],i=0;
    while(i<n)
    {
        scanf("%lld",&a[i]);
        i++;
    }
    i=0;
    jump:
    scanf("%lld",&c);
    if(c==0)
    {
       goto jump2;
    }
    else
    {
     switch(c)
     {
         case 1: if(i>0)
                    i--;
                 break;
         case 2: if(i<n-1)
                    i++;
                 break;
         case 3: if(flag==1)
                 {
                    if(a[i]==0)
                    {
                        
                    }
                    else
                    {
                     a[i]--;
                     flag=0;
                    }
                 }
                 break;
         case 4: if(flag==0)
                 {
                     if(a[i]==h)
                     {
                         
                     }
                     else
                     {
                         a[i]++;
                         flag=1;
                     }
                 }
                 break;
         default: printf("operation not valid.");
     }
     goto jump;
    }
    jump2:
    i=0;
    while(i<n)
    {
        printf("%lld ",a[i]);
        i++;
    }
    return 0;
}

