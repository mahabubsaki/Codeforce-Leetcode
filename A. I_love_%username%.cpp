#include <bits/stdc++.h>
using namespace std;
int main()
{
    int inp;
    bool first = true;
    cin >> inp;
    int min, max;
    int count = 0;
    for (int i = 0; i < inp; i++)
    {
        int x;
        cin >> x;
        if (first)
        {
            min = x;
            max = x;
            first = false;
        }
        else
        {
            if (x > max)
            {
                max = x;
                count++;
            }
            else if (x < min)
            {
                min = x;
                count++;
            }
        }
    }
    cout << count;
    return 0;
}