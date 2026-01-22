class Solution {
public:
    bool search(vector<int>& arr, int k) {
            int n=arr.size();
            int high=n-1;
            int low=0;
            while(low<=high){
                int mid=(low+high)/2;
                if(arr[mid]==k){
                    return true;
                }
                if(arr[mid]==arr[low] && arr[mid]==arr[high]){
                    low++;
                    high--;
                    continue;
                }
                if(arr[low]<=arr[mid]){
                    if(k>=arr[low] && k<=arr[mid]){
                        high=mid-1;
                    }
                    else low=mid+1;
                }
                else{
                    if(k<=arr[high] && k>=arr[mid]){
                        low=mid+1;
                    }
                    else high=mid-1;
                }
            }
            return false;
    }
};
