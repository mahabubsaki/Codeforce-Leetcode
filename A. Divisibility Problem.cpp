#include <bits/stdc++.h>
using namespace std;
int main()
{
    int inp;
    cin >> inp;
    for (int i = 0; i < inp; i++)
    {
        int p1, p2;
        cin >> p1;
        cin >> p2;
        int mod = p1 % p2;
        int res = mod == 0 ? 0 : p2 - mod;
        cout << res << endl;
    }

    return 0;
}