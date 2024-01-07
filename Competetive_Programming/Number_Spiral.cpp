#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ll row, col, t,ans;

    cin>>t;

    while (t--)
    {
        cin >> row >> col;

        if (row == 1 && col == 1)
        {
            ans = 1;
        }
        else if (row >= col)
        {
            if (row % 2 == 0)
            {
                ans = row * row - (col-1);
            }
            else
            {
                ans = ((row - 1) * (row - 1)+1) + (col-1);
            }
        }
        else if (row < col)
        {
            if (col % 2 != 0)
            {
                ans = col * col - (row-1);
            }
            else
            {
                ans = ((col - 1) * (col - 1)+1) + (row -1);
            }
        }
        std::cout<< ans << endl;
    }
    std::cout<< endl;
}