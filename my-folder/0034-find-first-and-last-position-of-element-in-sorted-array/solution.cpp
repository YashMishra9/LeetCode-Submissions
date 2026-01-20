class Solution {
public:
int lowerBound(vector<int>&arr,int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    for(int i=0;i<n;i++){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
int upperBound(vector<int>&arr,int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    for(int i=0;i<n;i++){
        int mid=(low+high)/2;
        if(arr[mid]>x){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
    vector<int> searchRange(vector<int>& arr, int k) {
        int n=arr.size();
             int lb=lowerBound(arr,n,k);
    if(lb==n || arr[lb]!=k){
        return {-1,-1};
    }
    return {lb,upperBound(arr,n,k)-1};
    }
};
