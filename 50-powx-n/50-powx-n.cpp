class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
        {
            return 1.0;
        }
        else
        {
             return pow(x,n);
        }
    }
};