#include <bits/stdc++.h>
using namespace std;

void LeftRotation(int arr[], int arr_size)
{
    int temp =arr[0];

    for(int i=1;i<arr_size;i++){
        arr[i-1] =arr[i];
    }

    arr[arr_size-1] =temp;
}

int main()
{
    int arr[] = {7, 2, 9, 4, 6, 1, 3, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    LeftRotation(arr, n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}