#include <bits/stdc++.h>
using namespace std;
int main()
{
    int inp;
    cin >> inp;
    string PIE = "314159265358979323846264338327";
    for (int i = 0; i < inp; i++)
    {
        string str;
        cin >> str;
        int total = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == PIE[i])
            {
                total++;
            }
            else
            {
                break;
            }
        }
        cout << total << endl;
    }

    return 0;
}