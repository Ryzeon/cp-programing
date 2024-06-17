#include <bits/stdc++.h>

using namespace std;

#define OS ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ar array
#define str string
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define fori(n) for (int i = 0; i < n; i++)
#define forj(n) for (int j = 0; j < n; j++)
#define rfori(n) 
#define all(a) (a).begin(), (a).end()
#define a first
#define b second

void solve() {
    int n, q;
    cin >> n >> q;
    vector<ll> v(n);
    vector<ll> stre(n); // en el segment tree
    // pongo los valroes de la suma de los valores de v en stre, en el indice
    // osea index 0 es v[i] pero el index 1 es la suma anterior + v[i] asi obtener la suma de los valores
    // entre rangos
    fori(n) {
        cin >> v[i];
        if (i == 0) {
            stre[i] = v[i];
        } else {
            stre[i] = stre[i - 1] + v[i];
        }
    }
    
    // ni idea pero asca se supoen que debo coder??? xdf

    while (q--) {
        ll l ,r, k;
        cin >> l >> r >> k;
       // entonce aca me pongo as programarwaiu xd // aca obtengo la suma de valores desde l hasta r
        ll sumrange = stre[r - 1] - (l == 1 ? 0 : stre[l - 2]);
        ll add = k * (l - r + 1); // aca por lo que voy a sumar 
        // finalmente obtengo la suma total le resto lo que le voy a quitrar y sumo lo que le voy a agregar
        cout << ((stre[n - 1] - sumrange + add) % 2 != 0 ? "YES" : "NO") << endl; // segmenyt tree
    
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
