#include <bits/stdc++.h>
using namespace std;
int areaSquare(int L, int B)
{

    int large = max(L, B);

    int small = min(L, B);

    if (large >= 2 * small)
        return large * large;
    else
        return (2 * small) * (2 * small);
}

int main()
{
    int inp;
    cin >> inp;
    for (int i = 0; i < inp; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << areaSquare(a, b) << endl;
    }
}
