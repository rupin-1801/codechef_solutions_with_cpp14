#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int T, N;
    long long b, n, B;
    cin >> T;
    while (T--) {
        cin >> N;
        N--;
        b = 0;
        n = 0;
        B = 0;

        if (N % 26 < 2) 
            b = 1LL << (N / 26);
        else if (N % 26 < 10) 
            n = 1LL << (N / 26);
        else 
            B = 1LL << (N / 26);
        cout << b << " " << n << " " << B << "\n";
    }
}
