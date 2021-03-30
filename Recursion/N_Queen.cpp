#include<iostream>
using namespace std;
int arr[10][10]={0};
int count=0;
bool fun(int arr[][10],int i,int j,int n)
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
bool queen(int arr[][10],int i,int n)
{
	if(i==n)
	{
		string res="";
		count++;
		for(int i1=0;i1<n;i1++)
		{
			for(int j1=0;j1<n;j1++)
			{
				cout<<arr[i1][j1]<<" ";
				
			}
      cout<<endl;
		}
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
