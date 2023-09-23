#include <bits/stdc++.h>

using namespace std;

#define OS ios_base::sync_with_stdio(false); cin.tie(nullptr);
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
    vector<pair<int,int>> arr;
     for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back({x, i + 1});
    }
    int next = arr[0].a;
    while (arr.size() > 1) {
        // cout << "After arr: ";
        // for (int i = 0; i < arr.size(); i++) {
        //     cout << arr[i].a << " ";
        // }
        // cout << endl;
        int call = next;
        int choose = (call - 1) % arr.size();
        next = arr[(choose + 1) % arr.size()].a;
        // cout << "call: " << call << " choose: " << choose << " next: " << next << endl;
        if (arr.size() == 2) {
            choose = next % 2 != 0;
        }
        arr.erase(arr.begin() + choose);
        // cout << "Before arr: ";
        // for (int i = 0; i < arr.size(); i++) {
        //     cout << arr[i].a << " ";
        // }
        // cout << endl;
    }
    cout << arr[0].b << endl;
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
