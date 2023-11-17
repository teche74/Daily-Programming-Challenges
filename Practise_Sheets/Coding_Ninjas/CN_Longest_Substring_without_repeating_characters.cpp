
int lengthOfLongestSubstring(string s) {
        int start=0,end =0;
        int mx =0;

        unordered_set<char> st;

        while(end<s.length()){
            if(st.find(s[end]) == st.end()){
                st.insert(s[end++]);
                mx = max(mx,end- start);
            }
            else{
                st.erase(s[start++]);
            }
        }
        return mx;       
}
