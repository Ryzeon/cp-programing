#include <bits/stdc++.h>

using namespace std;

#define OS ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ar array
#define str string
#define ll long long
#define ld long double
#define ppi pair<int, int>
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define fori(n) for (int i = 0; i < (int)(n); ++i)
#define forj(n) for (int j = 0; j < (int)(n); ++j)
#define forsj(s, n) for (int j = s; j < (int)(n); ++j)

#define rfori(n) for (int i = (int)(n) - 1; i >= 0; --i)
// #define a first
// #define b second

void solve() {
    int a, h, w;
    cin >>  a >> h >> w;
    fori(a) {
        char a, b;
        cin >> a >> b;
        if (a == 'Y' || w == 0) {
            cout<< "Y ";
            h--;
            w++;
        } else {
            cout << "N ";
        }

        if (b == 'Y' || h == 0) {
            cout<< "Y\n";
            w--;
            h++;
        } else {
            cout << "N\n";
        }
    }

}

int main() {
    OS;
    int n = 1;

  // cin >> n;
//    cin.ignore();
    
    while (n--) {
        solve();
    }
    return 0;
}
