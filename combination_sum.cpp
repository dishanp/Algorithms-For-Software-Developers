
// Problem Link: https://leetcode.com/problems/combination-sum/

class Solution
{
public:
    bool helper(vector<int> &nums, int currSum, int target, unordered_map<int, int> &perm, vector<unordered_map<int, int>> &collection, int index)
    {
        if (currSum > target)
        {
            return false;
        }

        if (currSum == target)
        {
            bool found = false;
            for (auto m : collection)
            {
                if (m == perm)
                {
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                collection.push_back(perm);
            }
            return true;
        }

        for (int i = index; i < nums.size(); i++)
        {
            perm[nums[i]] += 1;
            currSum += nums[i];
            bool flag = helper(nums, currSum, target, perm, collection, i);
            perm[nums[i]] -= 1;
            if (perm[nums[i]] <= 0)
            {
                perm.erase(nums[i]);
            }
            currSum -= nums[i];
            if (!flag)
            {
                break;
            }
        }

        return true;
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        unordered_map<int, int> perm;
        vector<unordered_map<int, int>> collection;

        sort(candidates.begin(), candidates.end());
        helper(candidates, 0, target, perm, collection, 0);

        vector<vector<int>> allPerms;

        for (auto m : collection)
        {
            vector<int> p;
            for (auto it : m)
            {
                int num = it.first;
                int freq = it.second;
                while (freq--)
                {
                    p.push_back(num);
                }
            }
            allPerms.push_back(p);
        }

        return allPerms;
    }
};