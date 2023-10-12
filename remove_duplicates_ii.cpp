#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        else {
            int c = 0;
            bool dup = false;
            for(int i = 1; i < nums.size(); i++) {
                if(nums[c] != nums[i]) {
                    if(dup) {
                        nums[c + 1] = nums[c];
                        c++;
                    }
                    nums[++c] = nums[i];
                    dup = false;
                }
                else
                    dup = true;
            }
            if(dup) {
                nums[c + 1] = nums[c];
                c++;
            }
            return c + 1;
        }
    }
};