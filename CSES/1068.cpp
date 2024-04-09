#include <bits/stdc++.h>

using namespace std;

#define OS ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ar array
#define str string
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define fori(i, n) for (int i = 0; i < (int)(n); ++i)
#define rfori(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define a first
#define b second

void solve() {
    ll n;
    cin >> n;
    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0) {
             n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    cout << n << endl;
}

int main() {
    OS;
    int n = 1;
    
    while (n--) {
        solve();
    }
    return 0;
}
