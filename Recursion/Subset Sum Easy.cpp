#include<iostream>
using namespace std;
int fun(int *arr,int i,int res,int n,int c)
{
	if(i==n)
	{
		if(res==0 && c>0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return (fun(arr,i+1,res+arr[i],n,c+1) || fun(arr,i+1,res,n,c));
	// return 0;

}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int arr[100000];
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int res=0;
		int c=0;
		if (fun(arr,0,res,n,c)==1)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}

	}
	return 0;
}
