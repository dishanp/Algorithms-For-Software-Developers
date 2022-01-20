class Solution {
public:
    bool isnum(char ch){
        return (int)ch>=48&&(int)ch<=57;
    }
    bool areNumbersAscending(string s) {
        istringstream ss(s);
        int l=0;
        string word;
        while(ss>>word){
            if(isnum(word[0])){
                if(stoi(word)<=l)
                    return false;
                l=stoi(word);
            }
        }
        return true;
    }
};
