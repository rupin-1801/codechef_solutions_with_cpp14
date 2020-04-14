#include<bits/stdc++.h>
using namespace std;
int main()
    {
        short T;
        cin>>T;
        while(T--)
        {
            long N,temp,i,A[3]={0,0,0};
            cin>>N;
            for(i=0;i<N;i++)
            {
                cin>>temp;
                if(temp==0)
                {
                    A[0]++;
                }
                else if(temp==1)
                {
                    A[1]++;
                }
                else if(temp==-1)
                {
                    A[2]++;
                }
            }
            if(A[1]>=A[2])
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
