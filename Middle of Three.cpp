class Solution{
  public:
    int middle(int A, int B, int C){
        if(A>=B&&A<=C||A>=C&&A<=B)
        return A;
        else if(B>=A&&B<=C||B<=A&&B>=C)
        return B;
        else
        return C;
    }
};
