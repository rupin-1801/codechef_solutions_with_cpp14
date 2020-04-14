#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false)
#define fast_in cin.tie(NULL)
#define fast_out cout.tie(NULL)
typedef long long ll;
int main()
{
fast;
fast_in;
fast_out;
int t;
cin>>t;
while(t--)
{ll a,b;
string s1,s2;
cin>>a>>b;
s1=to_string(a);
s2=to_string(b);
if(s1.length()==1 && s2.length()==1)
{cout<<a+b<<endl;
//cout<<"H1";
}
else if(s1.length()==1 && s2.length()==2)
{
//cout<<"H2";
if(s1[0]>s2[0])
{ll temp=b%10;
b/=10;
cout<<a*10+(temp)+b<<endl;
}
else
cout<<a+b<<endl;
}
else if(s1.length()==2 && s2.length()==1)
{
//cout<<"H3";
if(s2[0]>s1[0])
{ll temp=a%10;
a/=10;
cout<<b*10+(temp)+a<<endl;
}
else
cout<<a+b<<endl;
}
else
{
//cout<<"H4";
ll a0=a%10;
a/=10;
ll b0=b%10;
b/=10;
cout<<max(b*10+a0+a*10+b0,max(b0*10+a0+b*10+a,max(a*10+b+a0*10+b0,a*10+b0+b*10+a0)))<<endl;
}

}
return 0;
}
