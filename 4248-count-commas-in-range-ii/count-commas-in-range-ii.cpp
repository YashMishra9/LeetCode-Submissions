class Solution {
public:
    long long countCommas(long long n) {
        long long ans=0;
        if(n<=999){
            return 0;
        }
        ans+=min(n,999999LL)-999;
        if(n<=999999){
            return ans;
        }
        ans+=2*(min(n,999999999LL)-999999);
        if(n<=999999999){
            return ans;
        }

        ans+=3*(min(n,999999999999LL)-999999999);
        if(n<=999999999999LL){
            return ans;
        }

        ans+=4*(min(n,999999999999999LL)-999999999999);
        if(n<=999999999999999LL){
            return ans;
        }

        ans+=5*(n-999999999999999LL);
        return ans;
        
    }
};