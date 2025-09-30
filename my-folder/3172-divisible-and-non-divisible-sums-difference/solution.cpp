class Solution {
public:
    int differenceOfSums(int n, int m) {
        int DivSum=0;
        int NonDivSum=0;
        for(int i=1;i<=n;i++){
            if(i%m==0){
                DivSum+=i;
            }
            else{
                NonDivSum+=i;
            }
        }
        return NonDivSum-DivSum;
    }
};
