#include <bits/stdc++.h>
using namespace std;
int main()
{
    int red, blue;
    cin >> red >> blue;
    int small, large;
    if (red > blue)
    {
        large = red;
        small = blue;
    }
    else
    {
        large = blue;
        small = red;
    }
    cout << small << " " << (large - small) / 2;
    return 0;
}