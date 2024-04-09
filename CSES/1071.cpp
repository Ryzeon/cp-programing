#include "bits/stdc++.h"
 
using namespace std;
 
#define OS ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ar array
#define str string
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define fori(n) for (int i = 0; i < (int)(n); ++i)
#define rfori(n) for (int i = (int)(n) - 1; i >= 0; --i)
#define a first
#define b second
 
void solve() {
    ll x, y;
    cin >> y >> x;
    ll m = max(x, y);
    ll total = m * m;
    ll square = (m - 1) * (m - 1);
    if (m & 1) {
        if (x > y)
            cout << total - y + 1 << endl;
        else
            cout << square + x << endl;
    }
    else {
        if (x > y)
            cout << square + y << endl;
        else
            cout << total - x + 1 << endl;
    }
}
 
 
int main() {
    OS;
    int n = 1;
    cin >> n;
 
    while (n--) {
        solve();
    }
    return 0;
}
