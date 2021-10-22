//Print LCS of 2 strings
using namespace std;
#include<bits/stdc++.h>
int lcs(string &x,string &y,int i,int j){
    if(i==0||j==0)
    return 0;
    if(x[i-1]==y[j-1])
    return 1+lcs(x,y,i-1,j-1);
    return max(lcs(x,y,i-1,j),lcs(x,y,i,j-1));
}
void plcs(string &x,string &y,int i,int j){
    int m=i;
    int n=j;
    int s=lcs(x,y,m,n);
    char res[s+1];
    res[s]='\0';
    while(i>0&&j>0){
        if(x[i-1]==y[j-1]){
            res[s-1]==x[i-1];
            i--;
            j--;
            s--;
        }
        else if(lcs(x,y,i-1,j)>lcs(x,y,i,j-1))
        {
            i--;
        }
        else{
            --j;
        }
    }
        cout<<"Longest Common Subsequence of "<<x<<" and "<<y<<" is: "<<res;
}
int main(){
  string x = "AGGTAB";
  string y = "GXTXAYB";
  int m = x.size();
  int n = y.size();
  plcs(x,y, m,n);
  return 0;
}
