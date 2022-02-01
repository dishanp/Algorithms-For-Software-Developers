class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind=-1;
        for(int i=0;i<word.size();i++)
            if(word[i]==ch)
            {
                ind=i;
                break;
            }
        int i=0;
        int j=ind;
        while(i<=j){
            swap(word[i],word[j]);
            ++i;
            --j;
        }
        return word;
    }
};
