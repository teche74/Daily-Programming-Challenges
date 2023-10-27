class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        unordered_map<int,int>map;
        
        for(int i=0;i<size;i++){
            map[a[i]]++;
        }
        
        for(auto it :map){
            if(it.second>size/2){return it.first;}
        }
        return -1;
    }
};