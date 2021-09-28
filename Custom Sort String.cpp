string s;
bool my_compare(char c1,char c2){
    return s.find(c1) < s.find(c2);
}
class Solution {
public:
    string customSortString(string order, string str) {
        s=order;
        sort(str.begin(), str.end(),my_compare);
        return str;
    }
};
