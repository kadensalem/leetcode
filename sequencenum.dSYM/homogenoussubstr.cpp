class Solution {
public:
    int countHomogenous(string s) {
        long long ans = s.size();
        long long streak = 0;
        char last = s[0];
        for(int i = 1; i < s.size(); i++) {
            if(s[i] == last)
                streak++;
            if(s[i] != last || i == s.size() - 1 && streak > 0) {
                ans += streak * (streak + 1) / 2;
                streak = 0;
            }
            last = s[i];
        }
        return (int)(ans % (1000000007));
    }
};
// a 0
// aa 1
// aaa 3
// aaaa 6
// aaaaa 10