#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> nums{2, 7, 11, 15};
    int target = 9;
    // for (auto i = nums.begin(); i != nums.end(); i++)
    // {
    //     auto it = nums.find(target - *i);
    //     if (it != nums.end())
    //     {
    //         cout << distance(nums.begin(), i) << " " << distance(nums.begin(), it);
    //         break;
    //     }
    // }

    cout << *nums.find(11); // O(1)
}