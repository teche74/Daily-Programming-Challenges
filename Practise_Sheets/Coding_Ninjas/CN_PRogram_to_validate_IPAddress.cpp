#include <bits/stdc++.h> 
bool isValidIPv4(string ipAddress) {
    int dot_count = 1;
    if(ipAddress.size() > 15) return false;

    int temp =0;
    for(char ch : ipAddress){
        if(ch >='0' and ch <='9'){
            temp=temp*10 +(ch -'0');
        }

        else if(ch >='a' and ch <='z') return false;

        else if(ch =='.'){
            // cout<<temp;
            if(temp <0 || temp >255) return false;
            temp=0;
            dot_count++;
        }
    }

    if(dot_count ==4) return true;
    return false;
}
