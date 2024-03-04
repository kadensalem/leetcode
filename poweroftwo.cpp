class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n < 1)
            return false;
        n = abs(n);
        int count = 0;
        while(n != 0) {
            count += n & 1;
            n = n >> 1;
        }
        
        return count == 1;
    }
};

// 10000100000