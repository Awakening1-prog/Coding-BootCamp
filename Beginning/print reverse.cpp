#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n>0)
	{
		int r=n%10;
		cout<<r<<"";
		n=n/10;
	}
	cout<<endl;
	return 0;
}
