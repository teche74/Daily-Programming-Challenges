#include <bits/stdc++.h>
using namespace std;

void Appears_Once(int arr[], int arr_size)
{
    // using sort
    sort(arr,arr+arr_size);

    int i=1;

    while(arr[i]==arr[i-1]){i--;}

    cout<<arr[i-1]<<endl;

    //using xor

    int x = arr[0];

    for(int i=1;i<arr_size;i++){
        x^=arr[i];
    }

    cout<<x<<endl;
}

int main()
{
    int arr[] = {2, 3, 5, 4, 5, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    Appears_Once(arr, n);
    return 0;
}