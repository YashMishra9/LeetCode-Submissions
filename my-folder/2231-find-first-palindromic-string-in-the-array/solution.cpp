class Solution {
public:

bool Palindrome(string s){
    int start=0;
    int end=s.size()-1;
    while(start<=end){
        if(s[start++]!=s[end--]){
            return false;
        }
       
    }
    return true;
}

string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(Palindrome(words[i])){
                return words[i];
                break;
            }
            
        }
        return  "";
    }
};
