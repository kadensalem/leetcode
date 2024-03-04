#include <string>
using namespace std;

class Solution {
public:
    static bool BothAreSpaces(char lhs, char rhs) { 
        return (lhs == rhs) && (lhs == ' '); 
    }

    string reverseWords(string s) {
        // Get rid of whitespace
        s.erase(std::unique(s.begin(), s.end(), BothAreSpaces), s.end());
        if(s[0] == ' ')
            s.erase(0, 1);
        if(s[s.size() - 1] == ' ')
            s.erase(s.size() - 1, 1);

        // Reverse words
        int left = 0, right = 0;
        while(left < s.size()) {
            while(s[right] != ' ')  {
                if(right == s.size()) {
                    break;
                }
                right++;
            }
            reverse(s.begin() + left, s.begin() + right);
            left = ++right;
        }

        reverse(s.begin(), s.end());

        return s;
    }
};