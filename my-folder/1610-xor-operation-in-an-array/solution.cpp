class Solution {
public:
    int xorOperation(int n, int start) {
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=start+2*i;
        }
        int xorValue=0;
        int i=0;
        while(i<n){
            xorValue^=arr[i];
            i++;
        }
        return xorValue;

    }
};
