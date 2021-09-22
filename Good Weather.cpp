#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t!=0){
	    int n=7;
	    int a[7];
	    int g=0;
	    int b=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]==0)
	        ++b;
	        else
	        ++g;
	    }
	    if(g>b)
	    cout<<"YES"<<endl;
	    else 
	    cout<<"NO"<<endl;
	    t--;
	}
	return 0;
}
