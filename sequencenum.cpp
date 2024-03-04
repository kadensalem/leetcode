#include <string>
#include <vector>
#include <cstdio>
using namespace std;
int main() {
        int low = 1000, high = 13000;
        string s = "123456789";
        vector<int> ret;
        for(int i = 0; i < s.size(); i++) {
            for(int j = 1; j < s.size() - i + 1; j++) {
                if(i == 5)
                    printf("");
                int candidate = stoi(s.substr(i, j));
                if(candidate >= low && candidate <= high)
                    ret.push_back(candidate);
            }
        }
        sort(ret.begin(), ret.end());
    }
    
    // 2400 -> 5000
    // 3456 4567
