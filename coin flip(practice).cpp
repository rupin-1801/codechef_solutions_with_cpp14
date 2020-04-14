#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int g,i,j,n,q,ans;
	    cin>>g;
	    for(j=0;j<g;j++)
	    {
	        cin>>i;cin>>n;cin>>q;
	        if(n%2==0)
	        {
	           ans=n/2;
	        }
	        else
	        {
	            if(i==1)
	            {
	                if(q==1)
	                {
	                    ans=n/2;
	                }
	                else
	                {
	                    ans=(n/2)+1;
	                }
	            }
	            else
	            {
	                if(q==1)
	                {
	                    ans=(n/2)+1;
	                }
	                else
	                {
	                    ans=n/2;
	                }
	            }
	        }
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
                                
