#include <bits/stdc++.h>

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
// #define a first
// #define b second

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
    if (a + 1 != c) {
        cout << "-1\n";
        return;
    }
    if (a + b + c == 1) {
        cout << "0\n";
        return;
    }
    ll play = 1, nextPlay = 0, moves = 1, i = 0;

    while (i++ < a + b) {
        if (!play) { // si no le quedan movimientos
        swap(nextPlay, play); // intercambia jugador
        moves++; // otro movimeinto
        }
        play--; // una jugada menos
        nextPlay++; // se mevoio de play a nextPlay
        if (i < a) {
            nextPlay++;
        }
    }
	cout << moves << '\n';
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
