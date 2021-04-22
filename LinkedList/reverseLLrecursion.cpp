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

node* recurreverse(node* &root)
{
	if(root==NULL)
	{
		return root;
	}
	if(root->next==NULL)
	{
		return root;
	}
	node * node1=recurreverse(root->next);
	root->next->next=root;
	root->next=NULL;
	return node1;
}
void print(node*root)
{
	while(root)
	{
		cout<<root->data<<" ";
		root=root->next;
	}
}

int main() {
	int n;
	cin>>n;
	node *root;
	root=NULL;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		insert(root,a);
	}
	// mergesort(root);
	node* root1=recurreverse(root);
	print(root1);
	
	
	
	return 0;

}
