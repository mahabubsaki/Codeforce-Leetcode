#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k;
    cin >> n;
    cin >> w;
    int total = 0;
    for (int i = 1; i <= w; i++)
    {
        total = total + (i * k);
    }
    int x = total - n >= 0 ? total - n : 0;
    cout << x;
    return 0;
}