#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'getExperience' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY xp as parameter.
 */

int getExperience(vector<int> xp) {
    vector<int> orderVector = sprt
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string xp_count_temp;
    getline(cin, xp_count_temp);

    int xp_count = stoi(ltrim(rtrim(xp_count_temp)));

    vector<int> xp(xp_count);

    for (int i = 0; i < xp_count; i++) {
        string xp_item_temp;
        getline(cin, xp_item_temp);

        int xp_item = stoi(ltrim(rtrim(xp_item_temp)));

        xp[i] = xp_item;
    }

    int result = getExperience(xp);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
