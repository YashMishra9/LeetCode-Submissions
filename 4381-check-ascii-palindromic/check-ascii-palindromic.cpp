class Solution {
public:

    string decToBin(int n){
        string ans="";
        for(int i=0;i<8;i++){
            ans+=char((n%2)+'0');
            n/=2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    bool isPalindromic(string s) {
        vector<int>arr={};
        for(char c:s){
            arr.push_back(int(c));
        }
        
        string ans="";
        for(int x:arr){
            ans+=decToBin(x);
        }

        int start=0;
        int end=ans.size()-1;
        while(start<=end){
            if(ans[start]!=ans[end]){
                return false;
            }
            else{
                start++;
                end--;
            }
        }
        return true;


        
        
    }
};