#include <bits/stdc++.h>

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

void solve() {
    int  c;
    cin >> c;
    int m;
    cin >> m;
    vector<int> sz;
    fori(m) {
        int o;
        cin >> o;
        if (c  % o == 0) {
            sz.push_back(o);
        }
    }
    sort(sz.begin(), sz.end());
    for (int ss : sz) {
        cout << ss << " ";
    }
}

 int main() {
    OS;
    int n = 1;
   // cin >> n;

    while (n--) {
        solve();
    }
    return 0;
}
