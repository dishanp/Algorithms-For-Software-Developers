class Solution {
public:
    string longest_common_substring(string str1, string str2) 
    {   
        int s1 = str1.size(); int s2 = str2.size();
        int dp[s1+1][s2+1];
        string res ; int max = 0 ;

        for(int i=0; i<=s1; i++)
        {
            for(int j=0; j<=s2; j++)
            {   if(i==0 || j==0){ dp[i][j] = 0;}
             
                else if(str1[i-1] == str2[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                    
                    if(dp[i][j]>max)
                    {
                        string temp = str1.substr(i-dp[i][j], dp[i][j]) ;
                        string revtemp = string(temp.rbegin(),temp.rend());
                        if(revtemp==temp)
                        {
                            max = dp[i][j] ;
                            res = temp ;
                        }
                    }
                }
                else
                { dp[i][j] = 0 ; }
            }
        }

        return res;
    }
    string longestPalindrome(string s)
    {
        string srev = s;
        reverse(srev.begin(),srev.end());
        return longest_common_substring(s, srev); 
    }
};
