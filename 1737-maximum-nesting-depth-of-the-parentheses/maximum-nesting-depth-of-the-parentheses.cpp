class Solution {
public:
    int brackets(string s,int x){
        int cnt1=0,cnt2=0;
        for(int i=0;i<x;i++){
            if(s[i]=='('){
                cnt1++;
            }
            else if(s[i]==')'){
                cnt2++;
            }
        }
        return cnt1-cnt2;
    }
    int maxDepth(string s) {
        if(s=="()"){
            return 1;
        }
        int maxi=0;
        for(int i=0;i<s.length()-1;i++){
            int curr=brackets(s,i);
            maxi=max(maxi,curr);
        }
        return maxi;
    }
};