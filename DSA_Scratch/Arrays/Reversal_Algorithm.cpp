#include <bits/stdc++.h>
using namespace std;

void Reversal(int arr[], int low, int high){
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

void SegregateEvenOdd(int arr[], int arr_size, int k)
{
    Reversal(arr,0,k-1);
    Reversal(arr,k,arr_size-1);
    Reversal(arr,0,arr_size-1);
}

int main()
{
    int arr[] = {7, 2, 9, 4, 6, 1, 3, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    SegregateEvenOdd(arr, n, k);


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}