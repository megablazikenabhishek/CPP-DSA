#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4};

    vector<int>::iterator it;
    for (it = arr.begin(); it != arr.end(); it++) // it+1 is also valid only for vectors and pairs
    {
        cout << *it << " ";
    }
    cout << endl;

    sort(arr.begin(), arr.end(), greater<int>());

    for (auto it : arr)
        cout << it << " ";
}