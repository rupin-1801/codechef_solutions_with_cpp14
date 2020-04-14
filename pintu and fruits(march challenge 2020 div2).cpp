#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m,i,j,f[50],p[50],flag=1,count[50];
    cin >> t;
    while(t){
        cin >> n >> m;
        int c[50];
        for (i = 0 ; i < n ; i++){
            cin >> f[i];
        }
        for (j = 0 ; j < n ; j++){
            cin >> p[j];
        }
        for(i=0;i<m;i++){
            c[i]=0;
        }
        for (i = 1 ; i <= m ; i++){
            flag = 1;
            for (j = 0 ; j < n ; j++){
                if (f[j] == i){
                    flag=0;
                }
            }
            if (flag ==1)
                c[i-1] = 50 * n;
        }
        for (i = 1 ; i <= m ; i++){
            for (j = 0 ; j < n ; j++){
                if (f[j] == i){
                    c[i-1] = c[i-1] + p[j];
                }
            }
        }
        sort(c,c + m);
        cout<<c[0]<<"\n";
        t--;
    }
}
