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
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back({x, i + 1});
    }
    int next = 0;
    while(!a.empty()) {  
        // n = 4
        // vector = [8, 2, 4. 2]
        // el 0 dice que se recorrar 8 turnos
        int call = a[next].a; // 8
        int mod = (call % a.size());
        int choose = (mod == 0 ? (a.size() - 1) : (mod - 1));
        if (a.size() == 2) {
            //   cout << "next: " << next << endl;
            cout << a[choose].b << endl;
            break;
        }
        //    cout << "choose: " << choose << endl;
       
                //    cout << "choose: " << choose << endl;

        next = choose + 1 > a.size() - 1 ? 0 : choose + 1;

     

            //     cout << "----" << endl;

            //    cout << "actual numbers in arr after: ";
        // for (int x : a) cout << x << " ";
        // cout << endl;

        a.erase(a.begin() + choose);


        // cout << "call: " << call << endl;
        // cout << "mod: " << mod << endl;
        // cout << "choose: " << choose << endl;
      
        // cout << "arr n: " << a.size() << endl;

   

        // cout << "actual numbers in arr before: ";
        // for (int x : a) cout << x << " ";
        // cout << endl;

        // cout << "----" << endl;
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
