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

int n, l;
vector<vector<int> > adj;

int timer;
vector<int> tin, tout;
vector<vector<int> > up;

void dfs(int v, int p)
{
    tin[v] = ++timer;
    up[v][0] = p;
    for (int i = 1; i <= l; ++i)
        up[v][i] = up[up[v][i-1]][i-1];

    for (int u : adj[v]) {
        if (u != p)
            dfs(u, v);
    }

    tout[v] = ++timer;
}

bool is_ancestor(int u, int v)
{
    return tin[u] <= tin[v] && tout[u] >= tout[v];
}

int lca(int u, int v)
{
    if (is_ancestor(u, v))
        return u;
    if (is_ancestor(v, u))
        return v;
    for (int i = l; i >= 0; --i) {
        if (!is_ancestor(up[u][i], v))
            u = up[u][i];
    }
    int index = up[u][0];
    return index;
}

void preprocess(int root) {
    tin.resize(n);
    tout.resize(n);
    timer = 0;
    l = ceil(log2(n));
    up.assign(n, vector<int>(l + 1));
    dfs(root, root);
}

void solve()
{
    int m;
    cin >> n >> m;
    adj.assign(n, vector<int>(n, 0));
    fori(m) {
        int x, y, distance;
        cin >> x >> y >> distance;
        adj[x][y] = distance;
    }
    preprocess(0);
    int q;
    cin >> q;
    fori(q) {
        int u, v;
        cin >> u >> v;
        
        cout << lca(u, v) << endl;
    }
}

int main()
{
    OS;
    int n = 1;
    cin >> n;

    while (n--)
    {
        solve();
    }
    return 0;
}
