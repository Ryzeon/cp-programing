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
    string s;
    cin >> s;
    char last = s[0];
    ll c = 1;
    ll m = -1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == last) {
            c++;
            last = s[i];
        } else {
            m = max(m, c);
            c = 1;
            last = s[i];
        }
    }
    m = max(m, c);
    cout << m << endl;
}
 
int main() {
    OS;
    int n = 1;
    //    cin >> n;
 
    while (n--) {
        solve();
    }
    return 0;
}
