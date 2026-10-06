class Solution {
public:
    double divide(double x, long long N){
        if(N==0){
            return 1;
        }
        if(N%2==0){
            return divide(x*x,N/2);
        }else {
            return x*divide(x*x,N/2);
        }
    }
    double myPow(double x, int n) { //recursive approach
    long  long N=n;
        if(N<0){
        return {1/divide(x,-N)};
       }
       return divide(x,N);
    }
};