#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    bool flag =true;

    cin >> n;

    if (n >=2 && n< 4)
    {
        flag = false;
    }

    if(!flag){
        printf("NO SOLUTION");
    }
    else{
    for (int j = 2; j <= n; j+=2)
    {
        cout << j << " ";
    }
    for (int i = 1; i <= n; i += 2)
    {
        cout << i << " ";
    }
    }
}