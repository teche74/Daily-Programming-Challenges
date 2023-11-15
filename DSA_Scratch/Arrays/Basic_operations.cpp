#include<bits/stdc++.h>

using namespace std;

void insert_static(int * arr, int ele, int * size){
    int temp = (*size)++;

    arr[temp]=ele;
}

void insert_dynamic(vector<int>&temp ,int ele ){

    temp.push_back(ele);
}

void traversal_dynamic( vector<int>temp){
    for(char ch : temp){
        cout<<ch<<" ";
    }
}

void traversal_static(int arr[ ], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void delete_static(int arr[] , int * size){
    (*size)--;

}


void delete_dynamic(vector<int>& t){
    t.pop_back();
}

void rotation_static(int arr[ ], int size, string direction){
    if(direction == "left"){
        int temp = arr[0];
        for(int i=1;i<size;i++){
            arr[i-1] = arr[i];
        }
        arr[size-1] = temp;
    }
    else{
        int temp = arr[size-1];
        for(int i=size-2;i>=0;i--){
            arr[i+1] = arr[i];
        }
        arr[0] = temp;
    }
}

void dynamic_rotation(vector<int>& temp, string direction){
    if(direction == "left"){
        int x = temp.front();
        for(int i=1;i<temp.size();i++){
            temp[i-1] =temp[i];
        }
        temp[temp.size()-1] =x ; 
    }
    else{
        int x = temp.back();
        for(int i=temp.size()-2;i>=0;i--){
            temp[i+1] = temp[i];
        }
        temp[temp.size()-1] =x ; 
    }
}

void Linear_search_static(int arr[ ], int size, int x){
    for(int i=0;i<size;i++){
        if(arr[i] == x){
            cout<<"Found";
            return;
        }
    }
    cout<<"Not Found";
}

void Linear_search_dynamic(vector<int>temp,int x){
    for(int t : temp){
        if(t ==x){
            cout<<"Found";
            return;
        }
    }
    cout<<"Not Found";
}

void Bin_srch(vector<int>temp, int ele){
    int low =0 ,high = temp.size()-1;

    while(low<high){
        int mid = low+(high-low)/2;

        if(temp[mid] == ele){
            cout<<"Found";
            return;
        }

        else if(temp[mid] > ele){
            high = mid-1;
        }
        else{
            low =mid+1;
        }
    }  

    cout<<"Not Found";
}

int gcd(int a, int b){
    return a == 0  ? b : gcd(b%a, b ); 
}

void Juggling_Algo(vector<int> & t, int size, int rotations){
    int d ;
    for(int i=0;i<gcd(rotations,size);i++){
        int j = i ;
        int temp =t[i];

        while(true){
            d= (j+rotations)%size;

            if(d == i) break;

            t[j] = t[d];
            j =d;
        }
        t[j] = temp;
    }
}

int main(){
    int size =5;
    
    //  defining static arrays
    int arr[size];
    int arr2[size] = {1,2,3,4,5};

    // defining dynamic arrays

    vector<int> t;
    vector<int> x = {1,2,3,4,5};
    vector<int> z(5,0); // (size, element);

    // get length of dynamic arrays;

    int len = t.size();


    // Insertion
    insert_static(arr2,10,&size);

    insert_dynamic(t,13);

    // deletion
    delete_static(arr2,&size);
    delete_dynamic(t);

    // traversal
    traversal_static(arr2,size);

    // rotations
    rotation_static(arr2,size, "left");
}
