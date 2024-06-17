// #include "bits/stdc++.h"

#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <stdio.h>


using namespace std;

// #define OS ios_base::sync_with_stdio(false); cin.tie(nullptr);
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
const double pi = 2*acos(0);

struct pt {
    double x, y;
};

int orientation(pt a, pt b, pt c) {
    double v = a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y);
    if (v < 0) return -1; // clockwise
    if (v > 0) return +1; // counter-clockwise
    return 0;
}

bool cw(pt a, pt b, pt c, bool include_collinear) {
    int o = orientation(a, b, c);
    return o < 0 || (include_collinear && o == 0);
}
bool ccw(pt a, pt b, pt c, bool include_collinear) {
    int o = orientation(a, b, c);
    return o > 0 || (include_collinear && o == 0);
}

bool cpm(pt a,  pt b) {
    return make_pair(a.x, a.y) < make_pair(b.x, b.y);
}

void convex_hull(vector<pt>& a, bool include_collinear = false) {
    if (a.size() == 1)
        return;
    sort(a.begin(), a.end(), cpm);
    
    pt p1 = a[0], p2 = a.back();
    vector<pt> up, down;
    up.push_back(p1);
    down.push_back(p1);
    for (int i = 1; i < (int)a.size(); i++) {
        if (i == a.size() - 1 || cw(p1, a[i], p2, include_collinear)) {
            while (up.size() >= 2 && !cw(up[up.size()-2], up[up.size()-1], a[i], include_collinear))
                up.pop_back();
            up.push_back(a[i]);
        }
        if (i == a.size() - 1 || ccw(p1, a[i], p2, include_collinear)) {
            while (down.size() >= 2 && !ccw(down[down.size()-2], down[down.size()-1], a[i], include_collinear))
                down.pop_back();
            down.push_back(a[i]);
        }
    }

    if (include_collinear && up.size() == a.size()) {
        reverse(a.begin(), a.end());
        return;
    }
    a.clear();
    for (int i = 0; i < (int)up.size(); i++)
        a.push_back(up[i]);
    for (int i = down.size() - 2; i > 0; i--)
        a.push_back(down[i]);
}


double disP(pt &a,  pt &b) {
    return hypot(b.x - a.x,b.y - a.y);
}

double summcv(vector<pt> &a) {
    double sum = 0;
    int n = a.size();
    for (int i = 0; i < n;  i++) {
        sum += disP( a[i], a[(i+1)%n]);
    }
    return sum;
}

void solve() {
    int a, d;
    cin >> a >> d;
    vector<pt> vv;
    fori(a) {
        pt p;
        cin >> p.x  >> p.y;
        vv.push_back(p);
    }
    convex_hull(vv);
    double sum = summcv(vv);
    sum += 2 * pi * d;
    printf("%.0f\n",sum);
}

 int main() {
    // OS;
    int n = 1;
    // cin >> n;

    while (n--) {
        solve();
    }
    return 0;
}
