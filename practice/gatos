#include <bits/stdc++.h>

using namespace std;

#define OS ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ar array
#define str string
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
//#define a first
//#define b second

void solve() {
    int n;
    cin>>n;

    int ai, ti;
    map<int,pair<int,int>> m;
    map<int,int>ultraga;
    int i = 0;
    vector<int>tll;
    while(n--) {
        cin>>ai>>ti;

        m[i] = make_pair(ai,ti);
        // ti : tiempo q tarda en jamear

        ultraga[ai] = i;
        i++;

        tll.push_back(ai);

    }
    sort(tll.begin(), tll.end());
    int x=0, e;

    vector<int>es;
    for(int i=0; i<tll.size(); ++i) {
        int aix = tll[i];
        int ind1 = ultraga[aix], k = 0;

        //cout << "ind1: " << ind1 << endl;

    /*
        for(auto j : m) {
            if(aix == j.second.first) {
                ind1 = k;
                break;
            }
            k++;
        }*/

        int tix = m[ind1].second;

        if(i>0) {
            if(aix < x) {
                k = 0;

                int aixx = tll[i+1];
                int ind2 = ultraga[aixx];

                //cout << "ind2: " << ind2 << endl;
                /*
                for(auto j : m) {
                    if(aixx == j.second.first) {
                        ind2 = k;
                        break;
                    }
                    k++;
                }*/

                if(ind1>ind2 && tll[ind1] < x && tll[ind2] < x) {
                    for(int i : tll) cout << i << " ";
                    cout <<endl;
                    swap(tll[i], tll[i+1]); 
                    aix = aixx;
                    tix = m[ind2].second;
                }
            } 
        }
                    cout << x <<endl;

        if(x<aix) x = aix; // tiempo q llega a jamear

        e = x - aix; // tiempo de waiting
        es.push_back(e);

        x += tix;
    }

    int maxi = 0;
    for(int i : es) {
        if(i>maxi) maxi = i;
    }
    cout << maxi;

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
             