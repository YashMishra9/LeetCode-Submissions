class Solution {
public:
int findMax(vector<int>&v){
    int maxi=INT_MIN;
    int n=v.size();
    for(int i=0;i<n;i++){
       maxi=max(maxi,v[i]);
    }
    return maxi;
}

long long totalHours(vector<int>&v,int hourly){
    long long totalH=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        totalH+=ceil((double)v[i]/(double)hourly);
    }
    return totalH;
}
int minEatingSpeed(vector<int>& piles, int h) {
            int low=1;
            int n=piles.size();
            int high=findMax(piles);
        while(low<=high){
                int mid=(low+high)/2;
                long long totalH=totalHours(piles,mid);
                if(totalH<=h){
                    high=mid-1;
                }
                else low=mid+1;
            }
            return  low;
    }
};
