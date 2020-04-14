#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, i;
    long int n, p[100000], sum = 0;
    cin >> t;
    while(t--){
        cin >> n;
        sum = 0;
        for(i = 0; i < n; i++){
            cin >> p[i];
        }
        sort(p, p + n, greater<>());
        //for(i = 0; i < n; i++) cout << p[i] << " ";
        //cout << "\n";
        i = n - 1;
        while(p[i] - i <= 0){
            if(p[i] - i > 0) break;
            i--;
        }
        while(i >= 0){
            sum += (p[i] - i) % 1000000007;
            i--;
        }
        cout << sum % 1000000007 << "\n";
    }
}
