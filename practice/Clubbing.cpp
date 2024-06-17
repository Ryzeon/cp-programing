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

bool ison(char c, vector<str> &a)  {
    for (str cc : a) {
        if (cc.find(c)  != std::string::npos)  {
            return true;
        }
    }
    return false;
}

void solve() {
    int c;
    cin >> c;
    vector<str>  s(c);
    for (str &a : s) cin >> a;
    set<char> out;
    str aa;
    cin >> aa;
    for (char z : aa) {
        if (ison(z, s)) {
 out.insert(z);
        }
    }
    cout << sza(out) - 1 << endl;
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
