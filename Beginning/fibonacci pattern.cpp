#include <iostream>

using namespace std; 
int main() 
{ 
	int n;
	cin>>n;
	int x=(n*(n+1)/2);
	int dp[x+1];
	dp[0]=0;
	dp[1]=1;
	
	for(int i=2;i<x;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
		// cout<<dp[i]<<endl;
	}
	int c=0;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<dp[c]<<"	";
			c++;
		}
		cout<<endl;
	}
	return 0;
}
	
	
	
