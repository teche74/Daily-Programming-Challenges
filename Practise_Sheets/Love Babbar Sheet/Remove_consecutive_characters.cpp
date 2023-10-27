class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        string res="";
        int len =S.length();
        
        for(int i=0;i<len;){
            res+=S[i];
            char ch =S[i];
            
            while(S[i] == ch){
                i++;
            }
        }
        return res;
    }
};