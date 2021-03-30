#include<iostream>
using namespace std;
int arr[12][12]={0};
int count=0;
bool fun(int arr[][12],int i,int j,int n)
{
	for(int k=0;k<n;k++)
	{
		if(arr[i][k]==1 or arr[k][j]==1)
		{
			return false;
		}
	}
	int a ,b;
	a=i;
	b=j;
	while(i>=0 and j<n)
	{
		if(arr[i][j]==1)
		{
			return false;
		}
		i-=1;
		j+=1;
	}
	i=a;
	j=b;
	while(i>=0 and j>=0)
	{
		if(arr[i][j]==1)
		{
			return false;
		}
		i-=1;
		j-=1;
	}
	return true;
}
bool queen(int arr[][12],int i,int n)
{
	if(i==n)
	{
		string res="";
		count++;
		return false;
	}
	for(int j=0;j<n;j++)

	{
		if(fun(arr,i,j,n))
		{
			arr[i][j]=1;
			int op=queen(arr,i+1,n);
			if(op)
			{
				return true;
			}

		}
		arr[i][j]=0;
	}
	return false;

}
int main() {
	int n;
	cin>>n;
	queen(arr,0,n);
	cout<<endl;
	cout<<count<<endl;
	return 0;
}
