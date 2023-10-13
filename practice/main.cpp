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

void solve() {
    int n ;
    cin >> n;
    map<int, vector<string> > words;
    map<str, int> wordCount;
    fori(3) {
        forj(n) {
            str s;
            cin >> s;
            words[i].push_back(s);
            wordCount[s]++;
        }
    }
    fori(3) {
        int points = 0;
        vector<str> v = words[i];
        forj(n) {
            if (wordCount[v[j]] == 2) {
                points += 1;
            } else if (wordCount[v[j]] == 1) {
                points += 3;
            }
        }
        cout << points;
        if (i != 2) {
            cout << " ";
        }
    }
    cout << "\n";
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
