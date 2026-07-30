class Solution {
public:
    int minimumPushes(string word) {
        int ans=0;
        if(word.length()<=8){
            ans=word.length();
        }
        else if(word.length()<=16){
            ans=8+(word.length()-8)*2;
        }
        else if(word.length()<=24){
            ans=24+(word.length()-16)*3;
        }
        else{
            ans=8+16+24+(word.length()-24)*4;
        }
        return ans;
    }
};
