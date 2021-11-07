	vector<string>find_permutation(string s)
		{
		    vector<string>res;
		    sort(s.begin(),s.end());
		    do{
		        res.push_back(s);
		    }while(next_permutation(s.begin(),s.end()));
		    return res;
		}
