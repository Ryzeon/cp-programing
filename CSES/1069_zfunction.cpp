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

vector<int> z_func(string s) {
    int n = s.size();
    vector<int> f(n); // f[0] = 0 by default
    for (int i = 1, l = 0, r = 0; i < n; i++) {
        if (i <= r) f[i] = min(r - i + 1, f[i - l]);
        while (i + f[i] < n && s[f[i]] == s[i + f[i]]) f[i]++;
        if (i + f[i] - 1 > r) l = i, r = i + f[i] - 1;
    }
    return f;
}
 
int cnt_occ(string s, string t) {
    string ts = t + "#" + s;
    int n = t.size(), m = s.size(), nm = ts.size();
    auto f = z_func(ts);
    int res = 0;
    int lo = 0;
    for (int i = n + 1; i < nm; i++) {
   //     cout << f[i] << " ";
        res += (f[i] == n);
        if (f[i + 1] != n) {
            if (res > lo) {
                lo = res;
            }
            res = 0;
        }
            }
   // cout << endl;
    return lo;
}

void solve() {
    str s;
    cin >> s;
    set<char> st = {'A', 'C', 'G', 'T'};
    ll l = 0; 
    for (char c : st) {
        int count = cnt_occ(s, str(1, c));
        if (count > l) {
            l = count;
        }
    }
    cout << l << endl;
}

int main() {
    OS;
    int n = 1;
    
    while (n--) {
        solve();
    }
    return 0;
}
