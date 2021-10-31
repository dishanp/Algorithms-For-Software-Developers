class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        long long result = 0;
	unordered_map<double, int> mp;

	for (auto& rect : rectangles)
	{
		double ratio = (double)rect[0] / rect[1];
		if(mp.find(ratio) != mp.end()) result += mp[ratio];
		mp[ratio]++;
	}

	return result;
    }
};
