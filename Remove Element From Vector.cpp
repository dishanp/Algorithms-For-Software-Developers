#include <bits/stdc++.h>
class Solution {
public:
    int removeElement(vector<int>& myvector, int val) {
        for (auto i = myvector.begin(); i != myvector.end(); ++i) {
        if (*i  == val) {
            myvector.erase(i);
            i--;
        }
    }
        return myvector.size();
      //Return latest size
    }
};
