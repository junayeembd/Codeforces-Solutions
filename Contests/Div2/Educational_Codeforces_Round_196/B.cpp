#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	
	while (t--)
	{
	    int n;
	    cin>>n;
	    vector<int>ara(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>ara[i];
	    }
	    int m=0;
	    for(int i=0;i<n;i++)
	    {
	        int count=0;
	        for(int j=0;j<n;j++)
	        {
	            if(ara[j]%ara[i]==0)
	            {
	                count++;
	            }
	        }
	        m=max(m,count);
	    }
	    cout<<n-m<<endl;
	}
	return 0;
 
}