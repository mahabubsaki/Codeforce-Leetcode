#include <iostream>
using namespace std;
int main()
{

    string x;
    cin >> x;
    int arr[26];
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < x.size(); i++)
    {
        int item = x[i] - 97;
        arr[item] = arr[item] + 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}