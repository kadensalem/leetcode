class Solution {
public:
    int isPalindrome(string word) {
        for(int i = 0; i < word.size() / 2; i++) {
            if(word[i] != word[word.size() - i - 1])
                return 0;
        }
        return 1;
    }
    
    string firstPalindrome(vector<string>& words) {
        for(string word : words) {
            if(isPalindrome(word))
                return word;
        }
        return "";
    }
};