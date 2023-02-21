#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long inp;
    cin >> inp;
    if(inp % 2 == 0){
        cout << inp /2 ;
    }else{
        cout << (inp+1)/2 - (2*((inp+1)/2));
    }
    return 0;
}
