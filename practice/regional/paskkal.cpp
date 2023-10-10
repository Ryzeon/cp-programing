#include <bits/stdc++.h>

using namespace std;

#define OS ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ar array
#define str string
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define a first
#define b second

void solve() {
    int n, q;
    cin >> n >> q;
    vector<ll> v(n);
    ll owo = 0;
    for (ll &a : v) {
        cin >> a;
        owo += a;
    }
    
    
    while (q--) {
        ll l ,r, k;
        cin >> l >> r >> k;
        ll sum = 0;
        for (int i = l; i <= r; i++) {
            sum += v[i];
        }

        cout << (owo - sum + (k * (l + r - 1) ) % 2 != 0 ? "yes" : "no") << endl; // segmenyt tree
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
