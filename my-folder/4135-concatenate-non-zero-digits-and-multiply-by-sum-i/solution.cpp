#include<bits/stdc++.h>
class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0){
            return 0;
        }
        string ans="";
        string s=to_string(n);
        long long sum=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!='0'){
                sum+=s[i]-'0';
                ans+=s[i];
            }
        }
        long long num=stoi(ans);
        return num*sum;
    }
};
