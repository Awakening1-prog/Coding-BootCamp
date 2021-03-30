#include<iostream>
using namespace std;
int c2=0;
void fun (int arr[][10],int i,int j,int r,int c,string res,int c1)
{
	if(i==r-1 and j==c-1)
	{
		cout<<res<<" ";
		c2+=1;
		return;
	}

	if(i<0 or j<0 or i>=r or j>=c )
	{
		return ;
	}
	if(arr[i][j]==1)
	{
		return ;
	}
	arr[i][j]==1;
	fun(arr,i+1,j,r,c,res+'V',c1+1);
	fun(arr,i,j+1,r,c,res+'H',c1+1);
	fun(arr,i+1,j+1,r,c,res+'D',c1+1);
	arr[i][j]=0;
}
int main() {
	int r;
	cin>>r;
	int arr[10][10];


	int c;
	cin>>c;
	string res="";
	int c1=0;
	fun(arr,0,0,r,c,res,c1);
	cout<<endl;
	cout<<c2<<endl;
	return 0;
}
