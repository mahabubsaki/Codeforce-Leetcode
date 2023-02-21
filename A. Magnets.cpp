#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin >> input;
    vector<string> x;
    for (int i = 0; i < input; i++)
    {
        string str;
        cin >> str;
        x.push_back(str);
    }
    int total = 1;
    for (int i = 0; i < x.size() - 1; i++)
    {
        if (x[i] != x[i + 1])
        {
            total++;
        }
    }
    cout << total;
    return 0;
}