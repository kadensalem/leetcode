class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> copy(nums.size());
        for(int i=0; i < nums.size(); i++) {
            copy[i] = nums[i];
        }
        
        for(int i = 0; i < nums.size(); i++) {
            nums[(i+k) % nums.size()] = copy[i];
        }
        
        // [1,2,3,4,5,6,7]
        //  0 1 2 3 4 5 6
        //  3 4 5 6 0 1 2
        // (i + 3) % nums.size()
    }
};