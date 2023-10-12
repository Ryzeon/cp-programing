#include "bits/stdc++.h"

using namespace std;

#define OS ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define rfori(n) for (int i = n - 1; i >= 0; i--)
#define fori(n) for (int i = 0; i < n; i++)
#define ar array
#define str string
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define a first
#define b second

void solve() {
    int n;
    cin >> n;
    cin.ignore();
    stack<int> s;
    stack<int> maxs;
    fori(n) {
        str query;
        getline(cin, query);
        char c = query[0];
        if (c == '1') {
            string x = query.substr(2, sza(query));
            s.push(stoi(x));
            if (maxs.empty() || maxs.top() <= stoi(x)) {
                maxs.push(stoi(x));
            }
        } else if (c == '2') {
            int x = s.top();
            s.pop();
            if (x == maxs.top()) {
                maxs.pop();
            }
        } else if (c == '3') {
            cout << maxs.top() << endl; 
        }
    }
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