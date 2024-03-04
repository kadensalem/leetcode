class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";
        vector<int> ret;
        for(int i = 0; i < s.size(); i++) {
            for(int j = 1; j < s.size() - i + 1; j++) {
                int candidate = stoi(s.substr(i, j));
                if(candidate >= low && candidate <= high)
                    ret.push_back(candidate);
            }
        }
        sort(ret.begin(), ret.end());
        return ret;
    }
    
    // 2400 -> 5000
    // 3456 4567
};