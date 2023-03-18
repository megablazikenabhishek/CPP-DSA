#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<string, greater<string>> set;
    set.insert("bax");
    set.insert("sdhks");
    set.insert("lfshf");
    set.insert("sfsjd;a");

    for (auto it : set)
        cout << it << " ";
    cout << endl;
    set.erase("bax");
    for (auto i = set.begin(); i != set.end(); i++)
        cout << *i << " ";
}