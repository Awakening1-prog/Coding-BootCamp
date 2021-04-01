#include<iostream>
using namespace std;
int dp[11][11];
bool fun(char arr[][11],int i, int j, int r, int c)
{
	if(i==r-1 and j==c-1)
	{
		if(arr[i][j]=='O')
		{
			dp[i][j]=1;
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					cout<<dp[i][j]<<" ";
				}
			cout<<endl;
			}
		return true ; 

		}
		else
		{
			return false;
		}

	}
	if(i<0 or j<0 or i>=r or j>=c)
	{
		return false ;
	}
	if(arr[i][j]=='X' or dp[i][j]==1)
	{
		return false;
	}
	dp[i][j]=1;
	bool left=fun(arr,i+1,j,r,c);
	bool right=fun(arr,i,j+1,r,c);
	bool up=fun(arr,i-1,j,r,c);
	bool down=fun(arr,i,j-1,r,c);
	dp[i][j]=0;
	if( up || down || left || right )
	{
		return true;
	}
	return false;
}
int main() {
	char arr[11][11];
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	bool op=fun(arr,0,0,n,m);
	if(op==false)
	{
		cout<<"NO PATH FOUND"<<endl;
	}
	return 0;
}
