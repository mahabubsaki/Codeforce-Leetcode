#include <bits/stdc++.h>
using namespace std;
int main()
{
    double total;
    cin >> total;
    double p1 = 0;
    for (int i = 0; i < total; i++)
    {
        double x;
        cin >> x;
        p1 += x;
    }
    double perce = p1 / total;
    cout << perce << endl;
    return 0;
}