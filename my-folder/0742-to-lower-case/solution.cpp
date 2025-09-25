class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i]=s[i];
            }
            else if(s[i]>='A' && s[i]<='Z'){
                s[i]= s[i]+'a'-'A';
            }
            else{
                s[i]=s[i];
            }
               
        }
            return s;
    }
};
