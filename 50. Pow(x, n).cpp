class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long pow = n;
        if (pow < 0) {
            x = 1 / x;
            pow = -pow;
        }
        while (pow > 0) {
            if (pow % 2 == 1) {
                ans *= x;
            }
            x *= x;
            pow /= 2;
        }
        return ans;
    }
};