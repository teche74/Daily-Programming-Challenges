#include <bits/stdc++.h>
using namespace std;

void MoveZeroes(int arr[], int arr_size)
{
    // using another array;
    // vector<int>res(arr_size,0);
    // int j=0;

    // for(int i=0;i<arr_size;i++){
    //     if(arr[i]!=0){
    //         res[j++] = arr[i];
    //     }
    // }


    // for(int x : res){
    //     cout<<x<<" ";
    // }


    // inplace optimized;

    int j=0;

    for(int i=0;i<arr_size;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }


    // prebuilt function

    // std:: stable_partition(arr,arr+arr_size,[](int n){return n!=0;});

    for(int i=0;i<arr_size;i++){
        cout<<arr[i]<<" ";
    }

}

int main()
{
    int arr[] = {1, 2, 0, 0, 0, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    MoveZeroes(arr, n);
    return 0;
}