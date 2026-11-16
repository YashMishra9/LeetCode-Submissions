class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int cnt=1;
        int maxi=1;
        if(arr.size()==0){
            return 0;
        }
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]==arr[i]){
                continue;
            }
            if(arr[i+1]==arr[i]+1){
                cnt++;
                maxi=max(cnt,maxi);
            }
            else{
                cnt=1;
            }
        }
        return maxi;
    }
};