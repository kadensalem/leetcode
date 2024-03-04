class Solution {
public:
    int numberOfWays(string corridor) {
        int seats = 0, plants = 0, ret = 1;
        for(char c : corridor) {
            if(c == 'S')
                seats++;
            else if(seats == 2)
                plants++;
            if(seats == 3) {
                ret = ((int64_t)ret * (plants+1)) % int(1e9+7);
                seats = 1;
                plants = 0;
            }
        }
        
        if(seats != 2)
            return 0;
        return ret;
    }
};