class Solution {
public:
    int maxProfit(vector<int>& arr) {
         int max_diff = 0;
    
     int min_element = arr[0];
     for(int i = 1; i < arr.size(); i++)
     {    
       if (arr[i] - min_element > max_diff)                            
       max_diff = arr[i] - min_element;
        
       if (arr[i] < min_element)
       min_element = arr[i];                    
     }
      
     return max_diff;
    }
};
