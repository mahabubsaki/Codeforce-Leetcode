#include <bits/stdc++.h>
using namespace std;
int main()
{
    int range;
    cin >> range;
    for (int i = 0; i < range; i++)
    {
        string nums;
        cin >> nums;
        int first = 0, last = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i <= 2)
            {
                first += nums[i] - '0';
            }
            else
            {
                last += nums[i] - '0';
            }
        }
        if (first == last)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}