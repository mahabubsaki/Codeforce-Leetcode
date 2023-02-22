#include <bits/stdc++.h>
using namespace std;
int main()
{
    int inp;
    string word;
    cin >> inp;
    cin >> word;
    int all_words[26];
    for (int i = 0; i < 26; i++)
    {
        all_words[i] = 0;
    }

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] >= 97)
        {
            all_words[word[i] - 97] = 1;
        }
        else
        {
            all_words[word[i] - 65] = 1;
        }
    }
    bool flag = true;
    for (int i = 0; i < 26; i++)
    {
        if (all_words[i] == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}