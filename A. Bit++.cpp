#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total = 0;
    int op;
    cin >> op;
    for (int i = 0; i < op; i++)
    {
        string x;
        cin >> x;
        if (x == "++X" || x == "X++")
        {
            total++;
        }
        else
        {
            total--;
        }
    }
    cout << total;
    return 0;
}