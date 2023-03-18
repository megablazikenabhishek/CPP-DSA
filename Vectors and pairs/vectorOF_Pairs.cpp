#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<string, int>> arr{{"fjshf", 22}, {"sdfshfsf", 12}, {"shfohfsdohfsd", 77777}};

    vector<pair<string, int>>::iterator it;

    for (it = arr.begin(); it != arr.end(); it += 1)
    {
        cout << (*it).first << " " << (*it).second << " ";
    }
}