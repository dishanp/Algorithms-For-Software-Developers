class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        deque<int> dq;
        vector<int> res;
        int i = 0, left = 0;
        for(int i=0;i<n;i++)
        {
            while(!dq.empty() && dq.back() < arr[i])
                dq.pop_back();
                
            dq.push_back(arr[i]);
            
            if(i - left + 1 == k)
            {
                res.push_back(dq.front());
                if(arr[left] == dq.front())
                {
                    dq.pop_front();
                }
                left++;
            }
        }
        return res;
    }
};
