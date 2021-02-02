
#include<iostream>
using namespace std;
int main() {
	int n1;
	cin>>n1;
	int n2;
	cin>>n2;
	int c=0;
	int i=1;
	while(c<n1)
	{
		int res=i*3+2;
		if(res%n2)
		{
			cout<<res<<endl;
			c+=1;
			i+=1;
		}
		else
		{
			i+=1;
		}
	}
	return 0;
}
