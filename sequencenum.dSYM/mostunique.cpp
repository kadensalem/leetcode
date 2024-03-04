class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> map;
        for(char c : s) {
            if(map.count(c) > 0)
                map[c]++;
            else
                map[c] = 1;
        }
        
        for(int i = 0; i < s.size(); i++) {
            if(map[s[i]] == 1)
                return i;
                
        }
        
        return -1;
    }
};