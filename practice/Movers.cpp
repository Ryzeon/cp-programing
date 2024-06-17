#include "bits/stdc++.h"

using namespace std;

#define ar array
#define str string
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define fori(n) for (int i = 0; i < (int)(n); ++i)
#define rfori(n) for (int i = (int)(n) - 1; i >= 0; --i)

struct Lab
{
    ll monitors;
    ll desktop;

    vector<int> wn;
    vector<int> lw;

    bool pas() {
        ll aa = sza(wn) + sza(lw);
        return aa > 300;
    }

    ll nwDes(vector<Lab> &w) {
        ll sum = 0;
        for (Lab &a: w)  {
            sum += a.desktop;
        }
        return sum;
    }

    ll nwMo(vector<Lab> &m) {
        ll sum = 0;
        for (Lab &a: m) {
            sum += a.monitors;
        }
        return sum;
    }
    
    ll wDes(vector<Lab> &w) {
        ll sum = 0;

    }

    ll sumDes(vector<Lab> &v) {
        ll sum = 0;
        for (int a : n) {
            Lab &lab = v[a];
            if (lab.w()) {
                sum += 
            } else {
                sum 
            }
        }
        return sum;
    }
};


void solve() {
    ll n, m, q;
    cin >> n >> m >> q;
    vector<Lab> labs;
    fori(n) {
        Lab lab;
        cin >> lab.desktop;
        labs.push_back(
            lab
        );
    }
    fori(n) {
        Lab &lab = labs[i];
        cin >> lab.monitors;
    }

}

 int main() {
    int n = 1;
   // cin >> n;

    while (n--) {
        solve();
    }
    return 0;
}
