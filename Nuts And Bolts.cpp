class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    char ch[]={'!','#','$', '%','&','*','@','^','~'};
	    unordered_map <char,int>u;
	    for(int i=0;i<n;i++)
	      u[nuts[i]]+=13;
	    for(int i=0;i<n;i++)
	      u[bolts[i]]-=11;
	      int j=0;
	    for(int i=0;i<9;i++){
	        if(u[ch[i]]==2)
	        {
	            nuts[j]=bolts[j]=ch[i];
	            ++j;
	        }
	    }
	    
	}

};
