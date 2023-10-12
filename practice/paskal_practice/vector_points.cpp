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
const int MAX = 8e3 + 5;
#define a first
#define b second

vector<int> stepX, stepY;

int memx[MAX][MAX];
int px, py;

bool posx(int i, int curX) {
    if(i == stepX.size()) return curX == px;
    int &res = memx[i][curX];
    if(res != -1) return res;
    res = 0;
    res = posx(i+1, curX + stepX[i]) || posx(i+1, curX - stepX[i]);
    return res;
}

int memy[MAX][MAX];
bool posy(int i, int curY) {

    if(i == stepY.size()) return curY == py;
    int &res = memy[i][curY];
    if(res != -1) return res;
    res = 0;
    res = posy(i+1, curY + stepY[i]) || posy(i+1, curY - stepY[i]);
    return res;
}

void solve() {
    memset(memx, -1, sizeof memx);
    memset(memy, -1, sizeof memy); 
    int xd = 0;
    string s;
    cin >> s;
    s += 'T'; 
    cin >> px >> py;

    int nm = 0;
    int nt = 0;
    int x = 0;

    for (char a : s) {
        if (a == 'F') {
            nm++;
        } else {
            if (nt == 0) {
                x = nm;
            } else if (nm > 0) {
                if (nt % 2 == 0) {
                    stepX.push_back(nm);
                } else {
                    stepY.push_back(nm);
                }
            }
            nm = 0;
            nt++;
        }
    }

    if (posx(0, x) && posy(0,0)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    OS;
    int n = 1;
    //cin >> n;
    
    while (n--) {
        solve();
    }
    return 0;
}