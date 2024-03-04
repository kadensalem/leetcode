class Solution {
public:
    bool isSubsequence(string s, string t) {
        int tpos = 0, spos = 0;
        while(tpos < t.size() && spos < s.size()) {
            if(s[spos] == t[tpos])
                spos++;
            tpos++;
        }
        
        if(spos >= s.size())
            return true;
        return false;
    }
};