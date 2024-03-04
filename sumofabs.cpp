class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> left(nums.size());
        vector<int> right(nums.size());
        left[0] = nums[0];
        right[nums.size()-1] = nums[nums.size()-1];
        
        for(int i = 1; i < left.size(); i++) {
            left[i] = left[i-1] + nums[i];
        }
        
        for(int i = nums.size()-2; i >= 0; i--) {
            right[i] = right[i+1] + nums[i];
        }
        
        vector<int> ret(nums.size());
        ret[0] = right[1] - (nums[0] * (nums.size() - 1));
        ret[nums.size()-1] = (nums[nums.size()-1] * (nums.size() - 1)) - left[nums.size()-2];
        for(int i = 1; i < nums.size()-1; i++) {
            int leftpart = (nums[i] * i) - left[i-1];
            int rightpart = right[i+1] - (nums[i] * (nums.size()-1-i));
            ret[i] = leftpart + rightpart;
        }
        return ret;
    }
};

