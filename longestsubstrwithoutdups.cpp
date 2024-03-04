class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // if(s.size() < 2)
        //     return s.size();

        // unordered_set<char> set;
        // set.insert(s[0]);

        // int left = 0; right = 0;
        // int max = 1;

        // while(right < s.size()) {
        //     char cr = s[++right];
        //     if(set.count(cr)) {
        //         max = max(max, right - left + 1);
        //         while(s[left] != cr) {
        //             set.erase[s[left]];
        //             left++;
        //         }
        //     }
        // }

        int max = 0;
        for(int i = 0; i < s.size(); i++) {
            unordered_set<char> set;
            int count = 0;
            for(int j = i; j < s.size(); j++) {
                if(set.count(s[j]))
                    break;
                set.insert(s[j]);
                count++;
            }
            if(max < count)
                max = count;
        }

        return max;
    }
};