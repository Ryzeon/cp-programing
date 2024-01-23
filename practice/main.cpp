#include "bits/stdc++.h"

using namespace std;

#define OS                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ar array
#define str string
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define fori(n) for (int i = 0; i < (int)(n); ++i)
#define forj(n) for (int j = 0; j < (int)(n); ++j)
#define rfori(n) for (int i = (int)(n)-1; i >= 0; --i)
#define a first
#define b second

void solve() {
    map<int, vector<int>> p;
    fori(4) {
        int x, y;
        scanf("%d %d", &x, &y);
        vector<int> vv = p[];
        
        if () {

        } else {
        }
        p.push_back(make_pair(x, y));
    }
    int o;
    int l1 = (p[0].a * p[1].b) + (p[1].a * p[2].b) + (p[2].a * p[3].b) + (p[3].a * p[0].b);
    int l2 = (p[0].b * p[1].a) + (p[1].b * p[2].a) + (p[2].b * p[3].a) + (p[3].b * p[0].a);
    int v = abs(p[1].a - p[0].a);
    int u = abs(p[2].b - p[0].b);
    cout << v << " - " << u << endl;
    printf("%d\n", v * u);
    
}  

int main() {
    OS;
    int n = 1;
   // cin >> n;
    scanf("%d", &n); // scanea el n ;

    while (n--)
    {
        solve();
    }
    return 0;
}
