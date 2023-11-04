#include <bits/stdc++.h>
using namespace std;

void print3largest(int arr[], int arr_size)
{
    //brute Force  ( O (nlog(n)) + O(n));

    sort(arr, arr+arr_size);

    cout<<"largest 3 lements are :";
    int count=1;
    for(int i=arr_size-1;i>=0 && count<=3;i--){
        if(arr[i] == arr[i+1]){
            continue;
        }
        cout<<arr[i]<<" ";
        count++;
    }

    cout<<endl;




    // optimised

    int first,second,third;

    first =second =third = INT_MIN;

    for(int i=0;i<arr_size;i++){
        // found greatest of all 3;
        if(arr[i] > first){
            third =second;
            second =first;
            first = arr[i];
        }

        // found second largest
        else if(arr[i] != first && arr[i]>second){
            third =second;
            second =arr[i];
        }

        // found 3rd largest
        else if(arr[i] != first  && arr[i] != second && arr[i] > third){
            third =arr[i];
        }
    }

    cout<<"3 largest are : "<<first<<" "<<second<<" "<<third<<endl;
}

int main()
{
    int arr[] = {12, 13, 1, 10, 34, 11, 34};
    int n = sizeof(arr) / sizeof(arr[0]);

    print3largest(arr, n);
    return 0;
}