#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a > 0)
    {
        int sum = 0;
        string input;
        cin >> input;
        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] == '?')
            {
                if (sum % 2 == 0)
                {
                    input[i] = '(';
                }
                else
                {
                    input[i] = ')';
                }
                sum++;
            }
        }
        stack<char> st;
        bool isRegular = true;
        for (int i = 0; i < input.length(); i++)
        {
            char current = input[i];
            if (current == '(' || current == '{' || current == '[')
            {
                st.push(current);
            }
            else
            {
                if (st.empty())
                {
                    isRegular = false;
                    break;
                }
                if (current == ')')
                {
                    if (st.top() == '(')
                    {

                        st.pop();
                    }
                    else
                    {
                        isRegular = false;
                        break;
                    }
                }
                else if (current == '}')
                {
                    if (st.top() == '{')
                    {

                        st.pop();
                    }
                    else
                    {
                        isRegular = false;
                        break;
                    }
                }
                else
                {
                    if (st.top() == '[')
                    {

                        st.pop();
                    }
                    else
                    {
                        isRegular = false;
                        break;
                    }
                }
            }
        }
        if (st.size() > 0)
        {
            isRegular = false;
        }
        if (isRegular)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        a--;
    }

    return 0;
}