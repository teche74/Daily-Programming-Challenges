#include <bits/stdc++.h>
using namespace std;

void WaveForm(int arr[], int arr_size)
{
    sort(arr,arr+arr_size);
    for(int i=0;i<arr_size-1;i+=2){
        swap(arr[i],arr[i+1]);
    }

    for(int i=0;i<arr_size;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {10, 90, 49, 2, 1, 5, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    WaveForm(arr, n);
    return 0;
}