class Solution {
public:
    int sumOfMultiples(int n) {
        vector<int>arr;
        for(int i=2;i<=n;i++){
            if(i%3==0 || i%5==0 || i%7==0){
                arr.push_back(i);
            }
        }
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        return sum;
    }
};
