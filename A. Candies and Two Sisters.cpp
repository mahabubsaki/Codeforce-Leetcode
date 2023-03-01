#include <bits/stdc++.h>
using namespace std;
int main()
{
    int inp;
    cin >> inp;
    for (int i = 0; i < inp; i++)
    {
        int x;
        cin >> x;
        if (x <= 2)
        {
            cout << 0 << endl;
        }
        else if (x % 2 == 0)
        {
            cout << (x / 2) - 1 << endl;
        }
        else
        {
            cout << x / 2 << endl;
        }
    }

    return 0;
}
