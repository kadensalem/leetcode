class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> count(n+1, 0);
        for(auto v : trust) {
            count[v[1]]++;
        }
        int candidate = -1;
        for(int i = 1; i < count.size(); i++) {
            if(count[i] == n-1) {
                if(candidate != -1)
                    return -1;
                else
                    candidate = i;
            }
        }
        for(auto v : trust) {
            if(v[0] == candidate)
                return -1;
        }
        return candidate;
    }
};