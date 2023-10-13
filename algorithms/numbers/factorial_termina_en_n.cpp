#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll k;
    
ll ceros(ll n) {
    ll cnt = 0;
    while (n > 0) {
        cnt += (n / 5); // es entre 5 pq cada 5 es para un count de 0 
        n /= 5;
    }   
    return cnt;
}

// FFFVVV
bool f(ll mi) {
    return ceros(mi) >= k;
}

//devuelve primer V
ll search(ll lo, ll hi) {
    while (lo < hi) {
        ll mi = lo + (hi - lo) / 2;
        if (f(mi)) hi = mi;
        else lo = mi + 1;
    }
    if (ceros(lo) == k) return lo;
    return -1;
}

int main() {
    cin >> k;
    cout << search(0, 10 * k);
}