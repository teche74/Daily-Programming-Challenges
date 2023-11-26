#include <bits/stdc++.h> 
int merge(long long *arr, int low, int mid, int high) {

    vector<int> temp; 

    int left = low;      

    int right = mid + 1;   

 

    

    long long cnt = 0;

 

  

    while (left <= mid && right <= high) {

        if (arr[left] <= arr[right]) {

            temp.push_back(arr[left]);

            left++;

        }

        else {

            temp.push_back(arr[right]);

            cnt += (mid - left + 1); 

            right++;

        }

    }

 

  

 

    while (left <= mid) {

        temp.push_back(arr[left]);

        left++;

    }

 

   

    while (right <= high) {

        temp.push_back(arr[right]);

        right++;

    }

 

   

    for (int i = low; i <= high; i++) {

        arr[i] = temp[i - low];

    }

 

    return cnt; 

}

 

int mergeSort(long long *arr, int low, int high) {

    long long cnt = 0;

    if (low >= high) return cnt;

    int mid = (low + high) / 2 ;

    cnt += mergeSort(arr, low, mid);  

    cnt += mergeSort(arr, mid + 1, high); 

    cnt += merge(arr, low, mid, high); 

    return cnt;

}

long long getInversions(long long *arr, int n) {

    return mergeSort(arr, 0, n - 1);
}
