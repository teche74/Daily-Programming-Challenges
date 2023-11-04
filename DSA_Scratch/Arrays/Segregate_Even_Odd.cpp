#include <bits/stdc++.h>
using namespace std;

void SegregateEvenOdd(int arr[], int arr_size)
{
    // using extra array
    // vector<int>even;
    // vector<int>odd;

    // for(int i=0;i<arr_size;i++){
    //     if(arr[i]%2==0){
    //         even.push_back(arr[i]);
    //     }
    //     else{
    //         odd.push_back(arr[i]);
    //     }
    // }

    // vector<int>res;

    // for(int x: even){
    //     res.push_back(x);
    // }

    // for(int x : odd){
    //     res.push_back(x);
    // }

    // for(int x : res){
    //     cout<<x<<" ";
    // }


    // using stl

    stable_partition(arr,arr+arr_size,[](int n){return n%2==0;});

    for(int i =0;i<arr_size;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {7, 2, 9, 4, 6, 1, 3, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    SegregateEvenOdd(arr, n);
    return 0;
}