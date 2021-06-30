class Solution {
  public:
       int RedOrGreen(int N,string S) {
          int r=0;
          int g=0;
          for(int i=0;i<N;i++){
              if(S[i]=='G')
              ++g;
              if(S[i]=='R')
              ++r;
          }
          if(r<=g)
          return S.size()-g;
          return S.size()-r;
    }
};
