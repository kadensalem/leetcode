class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ret;
        for(int i = 0; i < min(word1.size(), word2.size()); i++) {
            ret += word1[i];
            ret += word2[i];
        }
        if(word1.size() < word2.size()) {
            for(int i = min(word1.size(), word2.size()); i < word2.size(); i++) {
                ret += word2[i];
            }
        }
        else if(word1.size() > word2.size()) {
            for(int i = min(word1.size(), word2.size()); i < word1.size(); i++) {
                ret += word1[i];
            }
        }
        return ret;
    }
};