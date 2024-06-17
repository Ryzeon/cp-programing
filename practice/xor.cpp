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
#define forj(n) for (int j = 0; j < (int)(n); ++j)

#define rfori(n) for (int i = (int)(n) - 1; i >= 0; --i)
#define a first
#define b second

void solve_arr(vector<int> &arr, int n) {
    vector<int> a(n);
    
}

void solve() {
    int n;
    while (n != 0 || (cin >> n)) {
        vector<int> arr(n);
        for(int &a : arr) cin >> a;
        solve_arr(arr, n);
    }
}

int main() {
    OS;
    int n = 1;

   cin >> n;
//    cin.ignore();
    
    while (n--) {
        solve();
    }
    return 0;
}
