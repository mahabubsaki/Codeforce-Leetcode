#include <bits/stdc++.h>
using namespace std;
int main()
{
    int range;
    cin >> range;
    for (int i = 0; i < range; i++)
    {
        int num;
        cin >> num;
        int total = 0;
        vector<int> nums;
        while (num % 10 != 0)
        {
            int remainder = num % 10;
            nums.push_back(remainder);
            num -= remainder;
        }
    }

    return 0;
}