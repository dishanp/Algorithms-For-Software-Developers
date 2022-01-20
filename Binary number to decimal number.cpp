int binary_to_decimal(string str)
		{
		   int res=0;
		   int ctr=0;
		   for(int i=str.size()-1;i>=0;i--){
		       if(str[i]=='1')
		       res+=pow(2,ctr);
		       ++ctr;
		   }
		   return res;
		}
