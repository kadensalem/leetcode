class Solution {
public:
    int isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    
    string reverseVowels(string s) {
        int left = 0, right = s.size() - 1;
        while(left < right) {
            if(isVowel(s[left]) && isVowel(s[right])) {
                char c1 = s[left];
                char c2 = s[right];
                s[left] = c2;
                s[right] = c1;
                left++;
                right--;
            }
            if(!isVowel(s[left]))
                left++;
            if(!isVowel(s[right]))
                right--;
        }
        
        return s;
    }
};