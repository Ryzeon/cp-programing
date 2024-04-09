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
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int &x : ar) {
        cin >> x;
    }
    ll c= 0;
    fori(n - 1) {
        if (ar[i + 1] <= ar[i]) {
            c += ar[i] - ar[i + 1];
            ar[i + 1] += ar[i] - ar[i + 1];
        }
    }
    cout << c << endl;
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
