class Solution {
public:
    string convert(string s, int numRows) {
       int len = s.length();

       if(numRows == 1 ) return s;

       if( numRows >= len) return s;

       int dir = -1;
       int row=0;

       vector<char>res[numRows];

       for(auto ch : s){
           res[row].push_back(ch);
           if(row ==0 || row == numRows-1){
               dir*=-1;
           }

           row+=dir;
       }
       string result;

       for(auto ch : res){
           for(auto t : ch){
               result+=t;
           }
       }

       return result;
    }
};
