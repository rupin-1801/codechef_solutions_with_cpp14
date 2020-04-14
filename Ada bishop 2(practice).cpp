#include <bits/stdc++.h>
using namespace std;

int main ()
{
int o;
cin>>o;
while(o--)
{
int r,c;
cin>>r>>c;
if(r==c)
{
if(r==8)
{
cout<<16<<endl;
cout<<1<<" "<<1<<endl;//1
cout<<2<<" "<<2<<endl;//2
cout<<3<<" "<<1<<endl;//3
cout<<8<<" "<<6<<endl;//4
cout<<6<<" "<<8<<endl;//5
cout<<1<<" "<<3<<endl;//6
cout<<2<<" "<<4<<endl;//7
cout<<1<<" "<<5<<endl;//8
cout<<4<<" "<<8<<endl;//9
cout<<8<<" "<<4<<endl;//10
cout<<5<<" "<<1<<endl;//11
cout<<6<<" "<<2<<endl;//12
cout<<7<<" "<<1<<endl;//13
cout<<8<<" "<<2<<endl;//14
cout<<2<<" "<<8<<endl;//15
cout<<1<<" "<<7<<endl;//16
}
else
  {cout<<17<<endl;
  cout<<8<<" "<<8<<endl;
  cout<<1<<" "<<1<<endl;
cout<<2<<" "<<2<<endl;
cout<<3<<" "<<1<<endl;
cout<<8<<" "<<6<<endl;
cout<<6<<" "<<8<<endl;
cout<<1<<" "<<3<<endl;
cout<<2<<" "<<4<<endl;
cout<<1<<" "<<5<<endl;
cout<<4<<" "<<8<<endl;
cout<<8<<" "<<4<<endl;
cout<<5<<" "<<1<<endl;
cout<<6<<" "<<2<<endl;
cout<<7<<" "<<1<<endl;
cout<<8<<" "<<2<<endl;
cout<<2<<" "<<8<<endl;
cout<<1<<" "<<7<<endl;}
}
else if(c>r)
{
while(c>r)
{
c--;
r++;
}
cout<<18<<endl;
cout<<r<<" "<<c<<endl;
cout<<8<<" "<<8<<endl;
cout<<1<<" "<<1<<endl;
cout<<2<<" "<<2<<endl;
cout<<3<<" "<<1<<endl;
cout<<8<<" "<<6<<endl;
cout<<6<<" "<<8<<endl;
cout<<1<<" "<<3<<endl;
cout<<2<<" "<<4<<endl;
cout<<1<<" "<<5<<endl;
cout<<4<<" "<<8<<endl;
cout<<8<<" "<<4<<endl;
cout<<5<<" "<<1<<endl;
cout<<6<<" "<<2<<endl;
cout<<7<<" "<<1<<endl;
cout<<8<<" "<<2<<endl;
cout<<2<<" "<<8<<endl;
cout<<1<<" "<<7<<endl;
}
else
{
while(r>c)
{
c++;
r--;
}
cout<<18<<endl;
cout<<c<<" "<<r<<endl;
cout<<8<<" "<<8<<endl;
cout<<1<<" "<<1<<endl;
cout<<2<<" "<<2<<endl;
cout<<3<<" "<<1<<endl;
cout<<8<<" "<<6<<endl;
cout<<6<<" "<<8<<endl;
cout<<1<<" "<<3<<endl;
cout<<2<<" "<<4<<endl;
cout<<1<<" "<<5<<endl;
cout<<4<<" "<<8<<endl;
cout<<8<<" "<<4<<endl;
cout<<5<<" "<<1<<endl;
cout<<6<<" "<<2<<endl;
cout<<7<<" "<<1<<endl;
cout<<8<<" "<<2<<endl;
cout<<2<<" "<<8<<endl;
cout<<1<<" "<<7<<endl;}
}
return 0;
}
