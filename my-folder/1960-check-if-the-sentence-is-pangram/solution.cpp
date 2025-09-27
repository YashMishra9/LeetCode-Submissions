class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> letters;
        for(char c:sentence){
            if(isalpha(c)){
                letters.insert(c);
            }
        }
        if(letters.size()==26){
            return true;
        }
        else{
            return false;
        }
    }
};
