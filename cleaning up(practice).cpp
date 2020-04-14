#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,i,j;
    cin>>t;
    for(j=0;j<t;j++)
    {
        int n,m,no;
        cin>>n>>m;
        long int jobs[n+1];
        for(i=0;i<n;i++)
        {
            jobs[i]=i+1;
        }
        for(i=0;i<m;i++)
        {
            int done;
            cin>>done;
            jobs[done-1]=0;
            
        }
        no=2;
        for(i=0;i<n;i++)
        {
            if(jobs[i]!=0)
            {
                if(no%2==0)
                {
                    cout<<jobs[i]<<" ";
                    jobs[i]=0;
                }
                no++;
            }
        }
        cout<<endl;
        for(i=0;i<n;i++)
        {
            if(jobs[i]!=0)
            {
                cout<<jobs[i]<<" ";
                jobs[i]=0;
            }
        }
        cout<<endl;
    }
	return 0;
}
