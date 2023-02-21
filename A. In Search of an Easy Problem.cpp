#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin >> input;
    bool isHard = false;
    for (int i = 0; i < input; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            isHard = true;
        }
    }
    if (isHard)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }
    return 0;
}