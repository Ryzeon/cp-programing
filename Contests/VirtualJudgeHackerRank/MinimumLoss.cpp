// time-limit: 1000
// problem-url: https://vjudge.net/problem/HackerRank-minimum-loss
#include <bits/stdc++.h>

using namespace std;

#define OS                                                                     \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr);
#define ar array
#define str string
#define ll long long
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define fori(n) for (int i = 0; i < (int)(n); ++i)
#define rfori(n) for (int i = (int)(n) - 1; i >= 0; --i)
#define forj(n) for (int j = 0; j < (int)(n); ++j)
#define forsj(s, n) for (int j = s; j < (int)(n); ++j)
#define coutc "\033[48;5;196m\033[38;5;15m"
#define endc "\033[0m"
#define len(x) int((x).size())
using pii = pair<int, int>;
using li = long long int;
using ld = long double; // using lli = __int128_t;
#define endl '\n'

#define fi first
#define se second

#ifdef DEBUG
string to_string(char c) { return string({c}); }
// 7
template <class... Ts> ostream &operator<<(ostream &o, tuple<Ts...> t) {
  string s = "(";
  apply([&](auto &&...r) { ((s += to_string(r) + ", "), ...); }, t);
  return o << s.substr(0, len(s) - 2) + ")";
}
// 3
ostream &operator<<(ostream &o, pair<auto, auto> p) {
  return o << "(" << p.fi << ", " << p.se << ")";
}
// 7
template <class C, class T = typename C::value_type,
          typename std::enable_if<!std::is_same<C, std::string>::value>::type
              * = nullptr>
ostream &operator<<(ostream &o, C c) {
  for (auto e : c)
    o << setw(7) << right << e;
  return o << endc << endl << coutc;
}
// 7
void debug(const auto &e, const auto &...r) {
  cout << coutc << e;
  ((cout << " " << r), ..., (cout << endc << endl));
}
#else
#define debug(...)
#endif

void solve() {
  ll n;
  cin >> n;
  vector<ll> p(n);
  for (ll &a : p)
    cin >> a;
  map<ll, ll> mp;
  fori(n) { mp[p[i]] = i; }
  sort(p.begin(), p.end());

  ll cc = 1e9;
  for (int i = 1; i < n; i++) {
    if (p[i] - p[i - 1] < cc) {
      // contrains of year
      if (mp[p[i]] > mp[p[i - 1]])
        continue;
      cc = min(cc, p[i] - p[i - 1]);
    }
  }
  cout << cc << endl;
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
