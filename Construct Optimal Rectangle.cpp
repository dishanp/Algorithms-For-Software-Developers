class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int>ans;
        for(int mid = sqrt(area); mid>0; mid--)
            if (!(area%mid))
                return {area/mid, mid};
        return ans;
    }
};
