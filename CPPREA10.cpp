// https://www.spoj.com/PTIT/problems/CPPREA10/
// CPPREA10 - Re-arrang Array 10

#include <bits/stdc++.h>
using namespace std;

<<<<<<< HEAD
void solve()
{
    string s;
    cin >> s;
    stack<int> st;
    string res = "";
    for (int i = 0; i <= s.length(); i++)
    {
        st.push(i + 1);
        if (i == s.length() || s[i] == 'I')
        {
            while (!st.empty())
            {
                res = res + char(st.top() + '0');
                st.pop();
            }
        }
    }
    cout << res << endl;
=======
void TestCase()
{
    string s;
    cin >> s;
    vector<int> v;
    int minn = 1, posI = 0;

    // Xét s[0]
    if (s[0] == 'I') {
        v.push_back(1);
        v.push_back(2);
        posI = 1;
    }
    else {
        v.push_back(2);
        v.push_back(1);
        posI = 0;
    }
    minn = 3;

    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == 'I') {
            v.push_back(minn);
            posI = i + 1;
        }
        else {
            v.push_back(v[i]);
            for (int j = posI; j <= i; ++j) {
                v[j]++;
            }
        }
        minn++;
    }
    for (auto x : v) cout << x;
    cout << endl;
>>>>>>> 7649b37621d13d879ad73299630b5d90caf0f1f1
}

int main()
{
    int T;
    cin >> T;
<<<<<<< HEAD
    while (T--)
        solve();
=======
    while (T--) {
        TestCase();
    }
>>>>>>> 7649b37621d13d879ad73299630b5d90caf0f1f1
    return 0;
}