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
    ll n;
    cin >> n;
    ll sum = (n * (n + 1 ) / 2); 
    ll summ = 0;
    fori(n - 1) {
        ll nn;
        cin >> nn;
        summ += nn;
    }
    cout << sum - summ << endl;
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