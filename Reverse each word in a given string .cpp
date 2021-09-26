string reverseWords (string s)
    {
        int li=0;
        s+=".";
        for(int i=0;i<s.size();i++){
            if(s[i]=='.'||s[i]=='\0'){
                reverse(s.begin()+li,s.begin()+i);
                li=i+1;
            }
        }
        s[s.size()-1]='\0';
        return s;
    }
