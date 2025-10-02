class Solution {
public:
    int countKeyChanges(string s) {
        int change=0;
        for(char &ch:s) {
            if(ch>='a' && ch<='z'){
                ch=ch;
            }   
            else{
                ch=ch-'A'+'a';
            }
        }
            
        for(int i=1;i<s.size();i++){
            if(s[i]!=s[i-1]){
                change+=1;
               
            }
        }
        return change;
    }
};
