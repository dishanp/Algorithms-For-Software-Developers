class Solution {
    bool valid(string &s) {
        int hyphen = 0, N = s.size();
        for (int i = 0; i < N; ++i) {
            if (isdigit(s[i])) return false;
            if (isalpha(s[i])) continue; 
            if (s[i] == '-') {
                if (++hyphen > 1) return false; 
                if (i - 1 < 0 || !isalpha(s[i - 1]) || i + 1 >= N || !isalpha(s[i + 1])) return false; 
            } else if (i != N - 1) return false; 
        }
        return true;
    }
public:
    int countValidWords(string s) {
        string w;
        istringstream ss(s);
        int ans = 0;
        while (ss >> w) ans += valid(w);
        return ans;
    }
};
