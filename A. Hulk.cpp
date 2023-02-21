#include <bits/stdc++.h>
using namespace std;
int main()
{
    int inp;
    cin >> inp;
    string res = "";
    for (int i = 1; i <= inp; i++)
    {
        if (i % 2 == 0)
        {
            if (i == inp)
            {
                res += "I love it ";
            }
            else
            {
                res += "I love that ";
            }
        }
        else
        {
            if (i == inp)
            {
                res += "I hate it ";
            }
            else
            {
                res += "I hate that ";
            }
        }
    }
    cout << res;
    return 0;
}