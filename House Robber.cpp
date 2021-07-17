int maxsum(vector<int>nums){
  int inc=nums[0];
  int exc=0;
  int newex;
  for(int i=1;i<nums.size();i++){
    if(inc>exc)
      newex=inc;
    else
      newex=exc;
    inc=nums[i]+exc;
    exc=newex;
  }
  return max(exc,inc);
}
