class Solution {
public:
    int sumbyD(vector<int>&arr,int div){
        int n=arr.size();
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=ceil((double)arr[i]/(double)div);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& arr, int threshold) {
        int low=1;
        int high=*max_element(arr.begin(),arr.end());
        while(low<=high){
            int mid=(low+high)/2;
            if(sumbyD(arr,mid)<=threshold){
                high=mid-1;
            }
            else low=mid+1;
        }
    return low;
    }
};
