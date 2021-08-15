vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int N, long long int k) {
                int left=0;
                queue<int> q;
                vector<long long>res;
                for(int i=0;i<N;i++){
                    if(a[i]<0)
                    q.push(a[i]);
                    if(i-left+1==k){
                        if(q.empty())
                        res.push_back(0);
                        else
                        res.push_back(q.front());
                        if(a[left]<0)
                        q.pop();
                        ++left;
                    }
                
                }
                return res;
 }
