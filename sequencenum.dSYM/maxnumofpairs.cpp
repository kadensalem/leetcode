class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(int n : nums) {
            map[n]++;
        }
        
        int count = 0;
        for(int n : nums) {
            if(map.count(k-n) > 0 && map[k-n] > 0 && map[n] > 0) {
                if(k-n == n && map[n] < 2)
                    continue;
                map[k-n]--;
                map[n]--;
                count++;
            }
        }
        
        return count;
    }
};