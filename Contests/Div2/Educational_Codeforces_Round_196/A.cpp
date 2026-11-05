#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	
	while (t--)
	{
	    int l,r;
	    cin>>l>>r;
	    
	    int n=r-l+1;
	    int result;
	    if(l>0 || r<0)
	    {
	        result=n-1;
	    }
	    else 
	    {
	        result=max(0,abs(l+r)-1);
	    }
	    cout<<result<<endl;
	}
	return 0;
 
}