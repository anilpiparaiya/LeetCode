#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    vector<int>c;
	    for(int i=0;i<n;i++)
	    {
	        int a;
	        cin>>a;
	        c.push_back(a);
	    }
	    sort(c.begin(),c.end());
	    int min=0,max=0;
	    int j=n;
	    for(int i=0;i<j;i++)
	    {
	        min+=c[i];
	        j=j-k;
	    }
	    j=0;
	    for(int i=n-1;i>=j;i--)
	    {
	        max+=c[i];
	        j+=k;
	    }
	    cout<<min<<" "<<max<<endl;
	}
	return 0;
}
