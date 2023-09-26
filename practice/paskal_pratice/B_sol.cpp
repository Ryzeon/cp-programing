#include <bits/stdc++.h>

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
    string s;
    cin >> s;
    map<char, int> mp = {{'(', 0}, {')', 0}};
    for (char c : s) {
        if (c == '?') continue;
        mp[c]++;
    }

    // for (auto p : mp) {
    //     cout << p.a << " " << p.b << endl;
    // }

    rfori(n) {
        if (s[i] == '?') {
            if (mp[')'] < n / 2) {
                s[i] = ')';
                mp[')']++;
            } else {
                s[i] = '(';
                mp['(']++;
            }
        }
        
    }
    mp['('] = mp[')'] = 0;
    fori(n) {
        if (s[i] == '(') mp['(']++;
        else mp[')']++;
        if(mp['(']<= mp[')'] && i != n - 1) {
            cout << ":(" << endl;
            return;
        }
    }
    cout << (mp['('] == mp[')'] ? s : ":(") << endl;
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