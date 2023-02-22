#include <bits/stdc++.h>
using namespace std;
int main()
{
    int inp;
    cin >> inp;
    int count = 0;
    while (inp > 0)
    {
        if (inp >= 100)
        {
            inp -= 100;
            count++;
        }
        else if (inp >= 20)
        {
            inp -= 20;
            count++;
        }
        else if (inp >= 10)
        {
            inp -= 10;
            count++;
        }
        else if (inp >= 5)
        {
            inp -= 5;
            count++;
        }
        else
        {
            inp--;
            count++;
        }
    }
    cout << count;
    return 0;
}