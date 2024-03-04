class Solution {
public:
    int reverse(int x) {
        int n = abs(x);
        int rev = 0;
        while(n != 0) {
            if(rev < INT_MIN/10 || rev > INT_MAX/10)
                return 0;
            rev *= 10;
            rev += n % 10;
            n /= 10;
        }
        if(x < 0)
            rev *= -1;
        return rev;
    }
};