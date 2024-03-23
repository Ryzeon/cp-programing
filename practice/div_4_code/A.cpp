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
// #define a first
// #define b second

void computeLPSArray(string pat, int M, int* lps);

// KMP searhc patern 
int KMPSearch(string pat, string txt)
{
    int M = pat.length();
    int N = txt.length();

    // create lps[] that will hold the longest prefix suffix
    // values for pattern
    int lps[M];

    // Preprocess the pattern (calculate lps[] array)
    computeLPSArray(pat, M, lps);

    int i = 0; // index for txt[]
    int j = 0; // index for pat[]
    while ((N - i) >= (M - j)) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }

        if (j == M) {
            return i - j;
            j = lps[j - 1];
        }

        // mismatch after j matches
        else if (i < N && pat[j] != txt[i]) {
            // Do not match lps[0..lps[j-1]] characters,
            // they will match anyway
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return -1;
}

// Fills lps[] for given pattern pat[0..M-1]
void computeLPSArray(string pat, int M, int* lps)
{
    // length of the previous longest prefix suffix
    int len = 0;

    lps[0] = 0; // lps[0] is always 0

    // the loop calculates lps[i] for i = 1 to M-1
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            // This is tricky. Consider the example.
            // AAACAAAA and i = 7. The idea is similar
            // to search step.
            if (len != 0) {
                len = lps[len - 1];

                // Also, note that we do not increment
                // i here
            }
            else // if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

bool compareBitsets(const bitset<32>& a, const bitset<32>& b) {
    return a.to_ulong() < b.to_ulong();
}

int min_groups(int n, vector<int>& a) {
    vector<bitset<32> > b(n);
    for (int i = 0; i < n; i++)
        b[i] = bitset<32>(a[i]);
    sort(b.begin(), b.end(), compareBitsets);
    int res = 0, cur = 0;
    for (int i = 0; i < n; i++) {
        if (i > 0 && b[i] == b[i - 1]) {
            cur++;
        } else {
            res += (cur + 1) / 2;
            cur = (i == 0);
        }
    }
    return res + (cur > 0);
}


void solve() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int &xd : numbers) {
        cin >>  xd;
    }
    cout << min_groups(n, numbers) << endl;

    // vector<vector<int> > gr;
    // for (int number : numbers)  {
    //     bool ad = false;
    //     for (auto &v : gr) {
    //         bool can = true;
    //         for (int nus : v)  {
    //             if (number & nus) {
    //                 can = false;
    //                 break;
    //             }
    //         }
    //         if (can) {
    //             v.push_back(number);
    //             ad = true;
    //             break;  
    //         }
    //     }
    //     if (!ad) {
    //         vector<int> sds;
    //         sds.push_back(number);
    //         gr.push_back(sds) ;
    //     }
    // }
    // cout << gr.size() << endl;
}

int main() {
    OS;
    int n = 1;
    cin >> n;
    // scanf("%d", &n); // scanea el n ;

    while (n--)
    {
        solve();
    }
    return 0;
}
