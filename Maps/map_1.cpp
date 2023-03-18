#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &arr)
{
    // already sorted
    cout << arr.size() << endl;
    for (auto &i : arr)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    map<int, string> M;
    M[1] = "abc"; // O(log(n))
    M[5] = "sddfdhf";
    M[7] = "shfdhf";

    map<int, string>::iterator it;
    for (it = M.begin(); it != M.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << " " << endl;
    }
    cout << endl;

    // passing an pair and only unique are expectesd
    M.insert({3, "shfsdfsd"});
    print(M);

    map<int, string>::iterator it1 = M.find(5);
    if (it1 != M.end())
        cout << (*it1).first << " " << (*it1).second << endl
             << endl;

    if (it1 != M.end())
        M.erase(it);

    print(M);

    // string s;
    // cout << s.max_size();
}