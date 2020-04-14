#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t,k,x,n,i,j;
	string str;

	cin>>t;
	
	while(t--)
	{
		cin.ignore(100, '\n');
		getline(cin,str);
		n=str.size();
		cin>>k>>x;
		int m=k;
		int hash[26];
		memset(hash, 0, sizeof(hash)); 
		
// 		for(i=0;i<n;i++)
// 		{
// 			freq[str[i]-'a']++;
// 			if(freq[str[i]-'a']>x && k==0)
// 			{
			
// 			cout<<i-m<<endl;
// 			break;
// 		}
// 			if(freq[str[i]-'a']>x)
// 			{
// 			    freq[str[i]-'a']--;
			
// 			k--;
// 			}
			
			
// 		}
if(k==0)
        {
            int co=0;
            for(i=0;i<26;i++)
            {
                hash[i]=0;
            }
            for(i=0;i<n;i++)
            {
                hash[str[i]-'a']++;
                if(hash[str[i]-'a']>x)
                {
                    break;
                }
                co++;
            }
           // for(i=0;i<26;i++)
           // printf("%d hash\n",hash[i]);
            printf("%d\n",co);
        }
        else
        {
            int co=0,f=0;
            for(i=0;i<26;i++)
            {
                hash[i]=0;
            }
            for(i=0;i<n;i++)
            {
                f=0;
                hash[str[i]-'a']++;
                if(hash[str[i]-'a']>x&&k>0)
                {
                    k--;
                    hash[str[i]-'a']--;
                    f=1;
                }
                else
                {
                    if(hash[str[i]-'a']>x)
                    {
                     break;
                    }
                }
                
                if(f==0)
                co++;
                //printf("%d coun\n",co);
            }
           // for(i=0;i<26;i++)
           // printf("%d hash\n",hash[i]);
            printf("%d\n",co);
		
	}
}}
