#include <bits/stdc++.h>
using namespace std;

void Leader(int arr[], int arr_size)
{
    vector<int>res;
    res.push_back(arr[arr_size-1]);
    int max=arr[arr_size-1];


    for(int i=arr_size-2; i >=0;i--){
        if(arr[i] > max){
            max=arr[i];
            res.push_back(max);
        }
    }


    for(int x : res){
        cout<<x<<" ";
    }
}

int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    Leader(arr, n);
    return 0;
}