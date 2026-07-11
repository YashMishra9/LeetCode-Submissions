class Solution {
public:
    string bin(int n){
        string ans="";
        while(n!=0){
            if(n%2==1){
                ans+='1';
            }
            else ans+='0';
            n/=2;
        }
        return ans;
    }
    bool isPowerOfTwo(int n) {
        string ans=bin(n);
        int cnt=0;
        for(int i=0;i<ans.length();i++){
            if(ans[i]=='1'){
                cnt++;
            }
        }
        if(cnt==1){
            return true;
        }
        return false;
    }
};
