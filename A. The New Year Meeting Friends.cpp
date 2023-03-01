#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int my_max = max(a, max(b, c));
    int my_min = min(a, min(b, c));
    int middle;
    if (b != my_max || b != my_min)
    {
        middle = b;
    }
    else if (a != my_max || a != my_min)
    {
        middle = a;
    }
    else
    {
        middle = c;
    }
    cout << (my_max - middle) + (middle - my_min) << endl;
    return 0;
}