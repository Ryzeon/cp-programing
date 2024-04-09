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
 
vector<int> nextPerm(int n) {
    
}
 
void solve() {
    ll n;
    cin >> n;
    if (n == 1) {
        cout << "1\n";
    }
    else if (n <= 3) {
        cout << "NO SOLUTION\n";
    } else {
        for (int i = 2; i <= n; i+=2) {
            cout << i << " ";
        }
        for (int i = 1; i <= n; i+=2) {
            cout << i << " ";
        }
    }
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
