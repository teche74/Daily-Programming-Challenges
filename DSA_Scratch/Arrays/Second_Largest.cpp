#include <bits/stdc++.h>
using namespace std;

void Secondlargest(int arr[], int arr_size)
{
    //brute Force  ( O (nlog(n)) + O(n));

    sort(arr, arr+arr_size);

    int i;
    int count=1;
    for( i=arr_size-1;i>=0;i--){
        if(count==0){
            break;
        }
        if(arr[i] == arr[i+1]){
            continue;
        }
        // cout<<arr[i]<<" ";
        count--;
    }

    cout<<"Second Largest : "<<arr[i]<<endl;




    // optimised

    int max=INT_MIN, second_max= INT_MIN;

    for(int j=0;j<arr_size;j++){
        if(max  < arr[j]){
            max =arr[j];
        }
    }

    for(int j=0;j<arr_size;j++){
        if( max != arr[j] and arr[j] > second_max ){
            second_max=arr[j];
        }
    }

    cout<<"Second_largest : "<<second_max<<endl;
}

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    Secondlargest(arr, n);
    return 0;
}