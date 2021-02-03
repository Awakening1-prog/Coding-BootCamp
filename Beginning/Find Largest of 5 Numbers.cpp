#include<iostream>
#include<climits>
using namespace std;
int main() {
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	int l[5];
	l[0]=a;
	l[1]=b;
	l[2]=c;
	l[3]=d;
	l[4]=e;
	int max1=INT_MIN;
	int i=0;
	while(i<5)

	{
		if(max1<l[i])
		{
			max1=l[i];
		}
		i+=1;
	}
	cout<<max1<<endl;
	return 0;
}
