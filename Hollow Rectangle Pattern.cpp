/*
IBM Interview Questtion:

Write a program to print hollow rectangle or square star patterns. Given the number of rows,
print the solid and hollow rectangle or square star patterns.
Input Format: An integer (n)
Output Format: Print hollow rectangle of n:n

*/
using namespace std;
#include<bits/stdc++.h>
void printrect(int n){
    for(int i=0;i<n;i++)
    cout<<"*";
    cout<<endl<<endl;
    for(int i=0;i<n-2;i++)
    {
        for(int j=0;j<n-1;j++){
            if(j==0)
            cout<<"*";
            if(j==n-2){
                cout<<"*"<<endl<<endl;
            }
            else{
                cout<<" ";
            }
        }
    }
    for(int i=0;i<n;i++)
    cout<<"*";
    cout<<endl;
}
int main(){
    cout<<endl;
    printrect(8);
    return 0;
}
