/*

Write a function sortStringByValue() which takes in a list of strings and sort them according
to the sum of the positional value of the alphabets where position of a is 1, b is 2, c is 3.....etc.
till z=26. Alphabets are not ----- character other than alphabets (upper and lower case) should
not be considered for positive value.
Input Format: The first integer ‘n’ denotes the size of the array and the next n lines of input
denote the n strings.
Output: Print strings in sorted manner.
Sample Input:
3
beast
fox
cat
Sample Output:
cat
fox
beast
Explanation: beast= 2+5+1+19+20 =47, fox= 6+15+24=45, cat= 3+1+20=24

*/

using namespace std;
#include<bits/stdc++.h>
static bool comp(string &a,string &b){
    int va=0;
    int vb=0;
    for(char ch:a)
    va+=(int)ch;
    for(int ch:b)
    vb+=(int)ch;
    return va<vb;
}
int main(){
    vector<string>s={"beast","fox","cat"};
    sort(s.begin(),s.end(),&comp);
    for(int i=0;i<s.size();i++)
    cout<<s[i]<<" ";
    return 0;
}
