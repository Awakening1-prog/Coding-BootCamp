#include <iostream>
#include<vector>
#include<cstring>
using namespace std;
vector<string>l;
void fun( int *arr ,int i, int sum1,string s1,int sum2, string s2,int n)
{
	if(i==n)
	{

		if(sum1==sum2)
		{
			l.push_back(s1+s2);
			cout<<s1<<"and "<<s2<<endl;
		}
		return ;
	}


	fun(arr,i+1,sum1+arr[i],s1+to_string(arr[i])+" ",sum2,s2,n);
	fun(arr,i+1,sum1,s1,sum2+arr[i],s2+to_string(arr[i])+" ",n);
}
int main()
{
	int n;
	cin>>n;
	int arr[1000000];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int s1,s2;
	s1=0;
	s2=0;
	fun(arr,0,0,"",0,"",n);
	cout<<l.size()<<endl;
}
