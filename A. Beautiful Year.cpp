#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin >> year;
    year++;
    while (true)
    {
        string str_year = to_string(year);
        if (str_year[0] != str_year[1] && str_year[0] != str_year[2] && str_year[0] != str_year[3] && str_year[1] != str_year[2] && str_year[1] != str_year[3] && str_year[2] != str_year[3])
        {
            break;
        }
        year++;
    }
    cout << year;
    return 0;
}