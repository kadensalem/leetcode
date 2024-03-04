#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        bool b = false;
        int c = 0;
        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] == ' ') {
                if(b)
                    break;
                else
                    continue;
            }
            b = true;
            c++;
        }
        return c;
    }
};