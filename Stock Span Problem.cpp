class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
      stack<int>s;
      s.push(0);
      vector<int>span;
      span.push_back(1);
      for(int i=1;i<n;i++){
          while(!s.empty() && price[i]>=price[s.top()]){
              s.pop();
          }
              if(s.empty())
              span.push_back(i+1);
              else
              span.push_back(i-s.top());
              s.push(i);
      }
      return span;
    }
};
