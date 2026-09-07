class Solution {
public:
    int countRotations(string s, int k) {
        int total=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
                total++;
            }
        }
        if(s[0]==s[s.length()-1]){
            total++;
        }
        if(k==total-1){
            return total;
        }
        else if(k==total){
            return s.length()-total;
        }
        return 0;
    }

};