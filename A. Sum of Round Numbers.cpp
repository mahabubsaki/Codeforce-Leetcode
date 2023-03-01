#include <bits/stdc++.h>
using namespace std;
int my_pow(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
};
int main()
{
    int range;
    cin >> range;
    for (int z = 0; z < range; z++)
    {
        int num;
        cin >> num;
        int x = num;
        int totalDigit = 0;
        while (x > 0)
        {
            totalDigit++;
            x /= 10;
        }
        totalDigit--;
        vector<int> arr;
        while (totalDigit > 0)
        {
            int rem = num % my_pow(10, totalDigit);
            int cur = num - rem;
            arr.push_back(cur);
            num = rem;
            totalDigit--;
        }
        arr.push_back(num);
        int y = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] != 0)
            {
                y++;
            }
        }
        cout << y << endl;
        for (int i = 0; i < arr.size(); i++)
        {

            if (arr[i] != 0)
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
}