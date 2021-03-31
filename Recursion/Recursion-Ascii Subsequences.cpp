#include<iostream>
#include<cstring>
using namespace std;
int c=0;
void fun(string s,string res,int ind)
{
	if(ind==s.length())
	{
		cout<<res<<" ";
		c++;
		return;
	}

	char a=s[ind];
	fun(s,res,ind+1);
	fun(s,res+a,ind+1);
	fun(s,res+ to_string(int(a)),ind+1);
}
int main() {
	string s;
	cin>>s;
	string res="";
	fun(s,res,0);
	cout<<endl;
	cout<<c<<endl;
	return 0;
}
