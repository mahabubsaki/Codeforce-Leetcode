#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows, cols;
    cin >> rows >> cols;
    bool tail = false;
    for (int i = 1; i <= rows; i++)
    {
        if (i % 2 == 0)
        {
            for (int i = 1; i <= cols; i++)
            {
                if ((!tail && i == cols) || tail && i == 1)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
            tail = !tail;
            cout << endl;
        }
        else
        {
            for (int i = 1; i <= cols; i++)
            {
                cout << "#";
            }
            cout << endl;
        }
    }

    return 0;
}