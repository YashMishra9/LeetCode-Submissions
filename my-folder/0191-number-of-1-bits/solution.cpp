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
    int hammingWeight(int n) {
        string ans=bin(n);
        int cnt=0;
        for(int i=0;i<ans.length();i++){
            if(ans[i]=='1'){
                cnt++;
            }
        }
        return cnt;
    }
};
