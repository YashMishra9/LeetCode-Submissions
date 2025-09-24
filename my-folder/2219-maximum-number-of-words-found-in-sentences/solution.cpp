class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int Max=0;
        for(string &s:sentences){
            int count=1;
            for(char c:s){
                if(c==' '){
                    count++;
                }
                Max=max(Max,count);
            }
        }    
            return Max;
    }
};
