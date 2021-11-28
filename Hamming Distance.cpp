class Solution {
public:
    int hammingDistance(int x, int y) {
        int res = 0;
        while (x || y) {
            res += (x % 2 != y % 2);
            x >>= 1, y >>= 1;
        }
        return res;
    }
};
