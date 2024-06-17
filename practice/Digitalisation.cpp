#include <bits/stdc++.h>

using namespace std;

#define ar array
#define str string
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define fori(n) for (int i = 0; i < (int)(n); ++i)
#define rfori(n) for (int i = (int)(n) - 1; i >= 0; --i)
#define FILL(arr, val) \
for(int i_##arr = 0; i_##arr < sizeof arr / sizeof *arr; ++i_##arr) \
{ \
    arr[i_##arr] = val;\
}

void solve() {
    int n,m,c;
    cin >> n >> m >> c;
    int f = 0;
    int s = 0;
    int ga[m];
    FILL(ga, 0);
    fori(n) {
        int ff, ss;
        cin >> ff >> ss;
        if (ga[ff - 1] < c) {
            f++;
            ga[ff - 1] = ga[ff - 1] + 1;
        } else if (ga[ss - 1] < c) {
            s++;
            ga[ss - 1] = ga[ss - 1] + 1;
        }
    }
    cout << f << " " << s << endl;
}

 int main() {
    int n = 1;
   // cin >> n;

    while (n--) {
        solve();
    }
    return 0;
}
