class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = 0;
        for(int i : candies) {
            if(i > max)
                max = i;
        }
        vector<bool> ret(candies.size(), false);
        for(int i = 0; i < ret.size(); i++) {
            if(candies[i] + extraCandies >= max)
                ret[i] = true;
        }
        return ret;
    }
};