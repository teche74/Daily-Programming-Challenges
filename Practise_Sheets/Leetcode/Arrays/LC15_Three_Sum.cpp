#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        // brute force O (n3)
        set<vector<int>>st;

        int size =  arr.size();
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                for(int k=j+1;k<size;k++){
                    if(arr[i]+arr[j]+arr[k] == 0){
                        vector<int>temp = {arr[i],arr[j],arr[k]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }

        vector<vector<int>>res(st.begin(),st.end());
        return res;


        // faster O(n2)
        int size = arr.size();
        set<vector<int>>st;

        for(int i=0;i<size;i++){
            set<int>hash;
            for(int j=i+1;j<size;j++){
                int third = -(arr[i] +arr[j]);

                if( hash.find(third) != hash.end()){
                    vector<int> temp = {arr[i],arr[j], third};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                else{
                    hash.insert(arr[j]);
                }
            }
        }
        vector<vector<int>>res(st.begin(),st.end());
        return res;
    }
};


int main(){

    vector<int>nums = {-1,0,1,2,-1,-4};
    int target = 9;
    Solution s = Solution();

    vector<vector<int>>res = s.threeSum(nums);

    for(auto temp : res){
        for(int x : temp){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}