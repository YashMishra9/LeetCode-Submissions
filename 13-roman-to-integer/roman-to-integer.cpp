class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        int start=0;
        while(start<s.length()){
            if(s[start]=='I' && s[start+1]=='V'){
                sum+=4;
                start+=2;
            }
            else if(s[start]=='I' && s[start+1]=='X'){
                sum+=9;
                start+=2;
            }
            else if(s[start]=='X' && s[start+1]=='L'){
                sum+=40;
                start+=2;
            }
            else if(s[start]=='X' && s[start+1]=='C'){
                sum+=90;
                start+=2;
            }
            else if(s[start]=='C' && s[start+1]=='D'){
                sum+=400;
                start+=2;
            }
            else if(s[start]=='C' && s[start+1]=='M'){
                sum+=900;
                start+=2;
            }
            else if(s[start]=='I'){
                sum++;
                start++;
            }
            else if(s[start]=='V'){
                sum+=5;
                start++;
            }
            else if(s[start]=='X'){
                sum+=10;
                start++;
            }
            else if(s[start]=='L'){
                sum+=50;
                start++;
            }
            else if(s[start]=='C'){
                sum+=100;
                start++;
            }
            else if(s[start]=='D'){
                sum+=500;
                start++;
            }
             else if(s[start]=='M'){
                sum+=1000;
                start++;
            }
        }
        return sum;
    }
};