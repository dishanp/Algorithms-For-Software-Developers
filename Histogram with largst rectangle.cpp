class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
   
    stack<int>s;
    int top=0;
    int max=0;
    int area=0;
    int i=0;
    while(i<h.size()){
        if(s.empty()||h[i]>=h[s.top()]){
            s.push(i++);
        }
        else{
            top=s.top();
            s.pop();
            if(s.empty())
            area=h[top]*i;
            else
            area=h[top]*(i-s.top()-1);
            if(area>max)
            max=area;
        }
    }
     while(!s.empty()){
            top=s.top();
            s.pop();
            if(s.empty())
            area=h[top]*i;
            else
            area=h[top]*(i-s.top()-1);
            if(area>max)
            max=area;
        }
    return max;
}
};
