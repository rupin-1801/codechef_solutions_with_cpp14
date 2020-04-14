#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int T, N, i, t, h, tt, c;
    int wt[100];
    char s[100][21];
    char w[21];

    scanf("%d", &T);
    while (T--) {
        memset(s, 0, sizeof(s));
        tt = 0;
        c = 0;
        scanf("%d", &N);
        while (N--) {
            t = 0;
            scanf("%s", w);
            for (i = 0; i < c; i++) {
                if (strcmp(w, s[i]) == 0) {
                    t = wt[i]/2;
                    break;
                }
            }
            if (t == 0) {
                if (w[0] < 'g')
                    h = 0;
                else
                    h = 1;
                t = 2;
                for (int j = 1; w[j] != 0; j++) {
                    if ((w[j] < 'g' && h == 1) || (w[j] > 'g' && h == 0)) {
                        h = !h;
                        t -= 2;
                    }
                    t += 4;
                }
                strcpy(s[c],w);
                wt[c] = t;
                c++;
            }
            tt += t;
        }
        printf("%d\n", tt);
    }
}
