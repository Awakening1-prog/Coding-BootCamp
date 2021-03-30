#include<iostream>
using namespace std;
void fun(string s, int ind ,string h[], string res,int n)
{
	if(ind==s.length())
	{
		cout<<res<<endl;
		return;
	}
	string ch=h[(s[ind]-'0')];
	for(int j=0;j<ch.length();j++)
	{
		fun(s,ind+1,h,res+ch[j],n);
	}
}
int main() {
	string s;
	cin>>s;
	string res;
	string h[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
	fun(s,0,h,res,s.length());
	return 0;
}
