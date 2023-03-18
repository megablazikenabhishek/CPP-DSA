#include <bits/stdc++.h>
using namespace std;

void print(set<string> s)
{
    for (auto i : s)
        cout << i << " ";
    cout << endl;

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    set<string> s; // implemented using redblock trees
    for (int i = 0; i < 5; i++)
    {
        string str;
        cin >> str;
        s.insert(str); // log(n)
    }

    auto it = s.find("abc");
    s.erase(it); // log(n)
    print(s);
}