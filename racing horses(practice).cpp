#include <iostream>
using namespace std;

int main() 
{
	int T,j;
	cin>>T;
	for(j=0;j<T;j++)
	{
	    int N;
	    cin>>N;
	    long int i,small=9999999999;
	    long int*S=new long int[N];
	    for(i=0;i<N;i++)
	    {
	        cin>>S[i];
	    }
	    long int check,k;
	    for(i=0;i<N;i++)
	    {
	        for(k=0;k<N;k++)
	        {   
	            if(i!=k)
	            {
	               check=abs(S[i]-S[k]);
	               if(check<=small)
	               {
	                   small=check;
	               }
	            }
	        }
	    }
	    cout<<small<<endl;
	}	
	return 0;
}
