class Solution {
public:
    int countDigits(int num) {
        string s=to_string(num);
        int count=0;;
        
        for(char c:s){
            int digit=c-'0';
            if(digit!=0 && num%digit==0){
                count+=1;
            }
        }
        
        return count;
    }
};
