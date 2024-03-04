class Solution {
public:
    unordered_map<int, int> data = {{0, 0}, {1, 1}, {2, 1}};
    int tribonacci(int n) {
        if(data.count(n) > 0) return data[n];
        data[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
        return data[n];
    }
};