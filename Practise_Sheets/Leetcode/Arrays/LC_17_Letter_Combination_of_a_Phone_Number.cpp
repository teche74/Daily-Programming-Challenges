class Solution {
public:
    void solve(int index, string digits, string temp, vector<string> &res, string check[ ]){
        if(index == digits.length()){
            res.push_back(temp);
            return;
        }

        int val = digits[index] - '0';
        string str = check[val];

        for(int i=0;i<str.length();i++){
            temp.push_back(str[i]);
            solve(index+1,digits,temp,res,check);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) return {};
        vector<string>res;
        string temp= "";
        string check[10] = {"", "" ,"abc", "def", "ghi", "jkl", "mno", "pqrs","tuv", "wxyz"};
        solve(0,digits,temp,res, check);
        return res;
    }
};
