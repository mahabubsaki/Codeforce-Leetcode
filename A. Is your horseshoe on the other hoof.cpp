#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    if (a == b && a == c && a == d && b == c && b == d && c == d)
    {
        cout << 3;
    }
    else if (a != b && a != c && a != d && b != c && b != d && c != d)
    {
        cout << 0;
    }
    else if ((a != b && a != c && a != d && b != c && b != d && c == d) || (a != b && a != c && a != d && b != c && b == d && c != d) || (a != b && a != c && a != d && b == c && b != d && c != d) || (a != b && a != c && a == d && b != c && b != d && c != d) || (a != b && a == c && a != d && b != c && b != d && c != d) || (a == b && a != c && a != d && b != c && b != d && c != d))
    {
        cout << 1;
    }
    else
    {
        cout << 2;
    }
    return 0;
}