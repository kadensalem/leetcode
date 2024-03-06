class Solution {
public:
    int minimumLength(string s) {
        int left = 0, right = s.size() - 1;
        while(s[left] == s[right] && left < right) {
            char c = s[left];
            while(s[left] == c && left <= right) { left++; }
            while(s[right] == c && left <= right) { right--; }
        }
        return right - left + 1;
    }
};