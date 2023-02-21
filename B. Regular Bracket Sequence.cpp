#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    string input;
    cin >> input;
    int total = 0;
    stack<char> st;
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
                continue;
            }
            if (current == ')')
            {
                if (st.top() == '(')
                {
                    total += 2;
                    st.pop();
                }
            }
            else if (current == '}')
            {
                if (st.top() == '{')
                {
                    total += 2;
                    st.pop();
                }
            }
            else
            {
                if (st.top() == '[')
                {
                    total += 2;
                    st.pop();
                }
            }
        }
    }

    cout << total;
    return 0;
}