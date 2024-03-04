#include <cmath>
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 0)
            return false;
        double logN = log(n);
        double log4 = log(4);
        double log = logN / log4;
        double temp;
        return modf(log, &temp) == 0;
    }
};