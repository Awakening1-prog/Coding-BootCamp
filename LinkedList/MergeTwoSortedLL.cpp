#include<iostream>
using namespace std;
class node
{
public:
	node* next;
	int data;
	node(int d)
	{
		next=NULL;
		data=d;
	}

};
void insert(node * &root,int key)
	{
		node* temp=new node(key);
		if(root==NULL)
		{
			root=temp;

		}
		else
		{
			node *ptr=root;
			while(ptr->next)
			{
				ptr=ptr->next;
			}
			ptr->next=temp;
		}
	}
void print(node*root)
{
	while(root)
	{
		cout<<root->data<<" ";
		root=root->next;
	}
}
node* merge(node* root1, node*root2)
{
	if(root1==NULL)
	{
		return root2;
	}
	if(root2==NULL)
	{
		return root1;
	}
	node* temp;
	temp=NULL;
	if(root1->data<root2->data)
	{
		temp=root1;
		temp->next=merge(root1->next,root2);
	}
	else{
		// node*temp;
		temp=root2;
		temp->next=merge(root1,root2->next);
	}
	return temp;
}
int main() {
	int n,m;
	cin>>n;
	cin>>m;
	
	node *root1,*root2;
	root1=NULL;
	root2=NULL;
	for(int i=0;i<n;i++)
	{
		int p;
		cin>>p;
		insert(root1,p);
	}
	for(int i=0;i<m;i++)
	{
		int a;
		cin>>a;
		insert(root2,a);
	}
	node*root3=merge(root1,root2);
	print(root3);
	
	
	return 0;

}
