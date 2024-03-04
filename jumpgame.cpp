class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_dist = 0;
        for(int i = 0; i < nums.size(); i++) {
            max_dist = max(max_dist, i + nums[i]);
            if(i == nums.size() - 1 || max_dist >= nums.size())
                return true;
            if(max_dist == i)
                return false;
        }
        
        return true;
    }
};