#include<bits/stdc++.h>

using namespace std;

void input_module(int static_array[ ], vector<int>&dynamic_array, int size){

    // static array always send as address refrence in calling function.
    // for dynamic array e have to send the refernce otherwise changes takes place for temporary basis.
    
    for(int i=0;i<size;i++){
        cin>>static_array[i];        // taking input from user 
        
        
        int x;
        cin>>x;
        dynamic_array.push_back(x);        // for every input it doubles its capacity if it reaches its available size;
    } 

}

void insert_in_between(int static_array[ ], vector<int>&dynamic_array, int position, int element, int * size){

    // for static array;
    
    
    (*size)++;
    // shifting element one step forward
    for(int i=(*size)-1;i>=position-1;i--){
        static_array[i+1] =static_array[i];
    }
    //  new element is placed on 0 based indexing
    static_array[position-1]= element; 


    // for dynamic array;
    

    // shifting element one step forward
    int n = dynamic_array.size();
    dynamic_array.resize(n+1);
    for(int i=n;i>=position-1;i--){
        dynamic_array[i+1] =dynamic_array[i];
    }

    //  new element is placed on 0 based indexing
    dynamic_array[position-1]= element; 
}


void delete_position_value(int static_array[ ], vector<int>&dynamic_array, int position, int * size){

    // for static array
    (*size)--;
    // shifting element one step backward
    for(int i=position-1;i<(*size);i++){
        static_array[i] =static_array[i+1];
    }
    
    
    // for dynamic array;
    // shifting element one step backward
    int n = dynamic_array.size();
    dynamic_array.resize(n+1);
    for(int i=position-1;i<n;i++){
        dynamic_array[i] =dynamic_array[i+1];
    }

    dynamic_array.resize(n-1);
}

int main(){
    int arr[10];            //static array with fixed size..
    vector<int>a;           // dynamic array with variable size..

    int n;                  //defining size for input.

    cin>>n;  // enter input size

    input_module(arr, a, n);

    int pos,ele;

    cout<<"Enter position and value to insert (Note it works on 0 based indexing )";
    cin>>pos>>ele;
    insert_in_between(arr,a,pos,ele,&n);



    cout<<"Enter index position you want to remove value :";
    cin>>pos;

    delete_position_value(arr,a,pos,&n);
}