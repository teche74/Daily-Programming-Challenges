#include <bits/stdc++.h> 

vector<int>helper(string &s,int start,int end) {
    if(start>end) {
        return {};
    }
    int num=0;
    vector<int>ans;
    for(int i=start;i<=end;i++) {
        if(s[i]=='*' || s[i]=='+' || s[i]=='-') {
            auto l=helper(s,start,i-1);
            auto r=helper(s,i+1,end);
            for(int j=0;j<l.size();j++) {
                for(int k=0;k<r.size();k++) {
                    if(s[i]=='*') {
                        ans.push_back(l[j]*r[k]);
                    }
                    else if(s[i]=='-') {
                        ans.push_back(l[j]-r[k]);
                    }
                    else {
                        ans.push_back(l[j]+r[k]);
                    }
                }
            }
        }
        else {
            num=(num*10)+(s[i]-'0');
        }
    }
    if(ans.empty()) {
        return {num};
    }
    return ans;
}

vector<int> diffWaysToCompute(string s) {
    return helper(s,0,s.length()-1);
}
