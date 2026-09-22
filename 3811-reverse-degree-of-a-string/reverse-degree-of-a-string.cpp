class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            sum+=((26-(int)s[i])+97)*(i+1);
        }
        return sum;
    }
};