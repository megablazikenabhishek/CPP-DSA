#include <iostream>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    if (s.length() <= 10)
    {
        cout << s << endl;
        return;
    }

    string ans;
    ans.push_back(s[0]);
    string temp = to_string(n - 2);
    ans += temp;
    ans.push_back(s[n - 1]);

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t)
    {
        solve();
    }
}