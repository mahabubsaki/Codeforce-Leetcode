#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int millie = k * l;
    int toast = millie / nl;
    int limes = c * d;
    int saltToast = p / np;
    int res = min(toast, min(limes, saltToast)) / n;
    cout << res;
    return 0;
}