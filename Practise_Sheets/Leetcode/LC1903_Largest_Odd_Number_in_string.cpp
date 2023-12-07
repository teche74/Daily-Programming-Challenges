static const int __ = []() { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return 0; }();
// #pragma GCC optimize("Ofast","inline","ffast-math","unroll-loops","no-stack-protector")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native","f16c")
class Solution {
public:
    string largestOddNumber(string num) {
      // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      int len =  num.length();

    
      while(len--){
         if( num[len]=='1'||num[len]=='3'||num[len]=='5'||num[len]=='7'||num[len]=='9'){
           return num.substr(0,len+1);
         }
      }

      return "";
    }
};
