class Solution{
public:
	string removeDuplicates(string str) {
	   unordered_map<char,int>u;
	   string s="";
	   for(int i=0;i<str.size();i++){
	       if(u[str[i]]>0)
	       continue;
	       else{
	       u[str[i]]++;
	       s+=str[i];
	       }
	   }
	   return s;
	}
};
