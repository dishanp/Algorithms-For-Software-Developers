class Vowels {
public:
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        char temp;
     
        while(i<j){
            if(isV(s[i])&&isV(s[j])){
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
            }
            else if(isV(s[i])&&!isV(s[j])){
                j--;
            }
            else if(!isV(s[i])&&isV(s[j])){
                i++;
            }
            else{
                i++;
                j--;
            }
        }
        return s;
    }
    bool isV(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            return true;
        return false;
    }
};
