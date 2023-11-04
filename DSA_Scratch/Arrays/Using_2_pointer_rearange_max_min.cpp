#include <bits/stdc++.h>
using namespace std;

void Arrange_Max_Min(int arr[], int arr_size)
{
    // using another array.
    int low =0 , high=arr_size-1;
    vector<int>res;


    while(low<high){
        res.push_back(arr[high]);
        res.push_back(arr[low]);
        low++;
        high--;
    }

    if(arr_size%2 !=0){
        
        res.push_back(arr[low]);
    }

    for(int x: res){
        cout<<x<<" ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    Arrange_Max_Min(arr, n);
    return 0;
}