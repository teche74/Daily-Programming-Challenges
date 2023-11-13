class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len  = strs.size();
        string res = "";

        for(int i=0;i<len;i++){
            if(i==0) res = strs[0];
            
            string temp = strs[i];
            string update;

            for(int j=0;j<temp.length();j++){
                if(res[j] == temp[j]){
                    update+=temp[j];
                }
                else break;
            }
            // cout<<temp<<" "<<update<<" "<<res<<endl;
            res = update;
        } 

        return res;
    }
};
