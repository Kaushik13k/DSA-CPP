// https://leetcode.com/problems/powx-n/

class Solution {
public:
    double myPow(double x, int n) {
        long binary = n;
        double ans =1;

        if (n == 0)
            return 1;

        if (n < 0){
            x = 1 / x;
            binary = -binary;
        }

        while (binary > 0){
            if(binary%2 == 1){
                ans *= x;
            }
            x *= x;
            binary /= 2;
        }
        return ans;
    }
};