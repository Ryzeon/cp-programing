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
    int a, b, c;
    cin >>a >> b >> c;
    bool ismayus = a + b == c;
    if (ismayus) {
        cout << "+\n";
    } else {
        cout << "-\n";
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
