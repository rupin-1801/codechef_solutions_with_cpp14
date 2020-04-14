#include<bits/stdc++.h>
using namespace std;
int main()
    {
        long long n,t;
        cin>>t;
        while(t-->0)
        {
            int temp=0;
            cin>>n;
            while(n>=5)
            {
                temp+=n/5;
                n=n/5;
            }
            cout<<temp<<endl; 
        }
            
        
    }
