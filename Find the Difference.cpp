class Solution {
public:
char findTheDifference(string s, string t) {
unordered_map<char,int> mp;
for(int i=0;i<t.size();i++){
mp[t[i]]++;
}
for(int i=0;i<s.size();i++){
mp[s[i]]--;
}
for(auto it: mp){
if(it.second==1)
return it.first;
}
return t[0];
}
};
