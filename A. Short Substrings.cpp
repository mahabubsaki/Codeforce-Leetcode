#include <bits/stdc++.h>
using namespace std;
int main()
{
    int inp;
    cin >> inp;
    for (int j = 0; j < inp; j++)
    {
        string x;
        cin >> x;
        string y = "";
        y += x[0];
        for (int i = 1; i < x.size() - 1; i += 2)
        {
            y += x[i];
        }
        y += x[x.size() - 1];
        cout << y << endl;
    }

    return 0;
}