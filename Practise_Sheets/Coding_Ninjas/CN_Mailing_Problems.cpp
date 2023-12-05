#include<bits/stdc++.h>
int timeTakenToMail(string keyboard, string s) {
    unordered_map<char ,int> hash;

    for(int i=0;i<keyboard.length();i++){
        hash[keyboard[i]] = i+1;
    }

    int sum =0;

    sum += abs(hash[keyboard[0]] - hash[s[0]]);

    for(int i=0;i<s.length()-1;i++)
    {
        sum+= abs(hash[s[i+1]] - hash[s[i]] );

    }

    return sum;
}
