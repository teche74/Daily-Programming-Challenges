#include <bits/stdc++.h>
using namespace std;

void Greater_Even_Position(int arr[], int arr_size)
{
    for(int i=1;i<arr_size;i=i+2){
        if(arr[i] < arr[i-1]){
            swap(arr[i],arr[i-1]);
        }
    }

    for(int i=0;i<arr_size;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    Greater_Even_Position(arr, n);
    return 0;
}