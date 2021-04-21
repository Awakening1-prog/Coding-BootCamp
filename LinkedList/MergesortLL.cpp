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

node* mid(node* root)
{
	if(root==NULL || root->next==NULL)
	{
		return root;
	}
	node* fast=root->next;
	node* slow=root;
	while(fast && fast->next)
	{
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow;
}
void print(node*root)
{
	while(root)
	{
		cout<<root->data<<" ";
		root=root->next;
	}
}
node * merge(node* root1, node* root2)
{
	node* temp=NULL;
	if(root1==NULL)
	{
		return root2;
	}
	if(root2==NULL)
	{
		return root1;
	}
	if(root1->data<root2->data)
	{
		temp=root1;
		temp->next=merge(root1->next,root2);
	}
	else{
		temp=root2;
		temp->next=merge(root1,root2->next);
	}
	return temp;
}
node* mergesort(node* &root)
{
	if(root==NULL || root->next==NULL)
	{
	return root;
	}
	node*middle =mid(root);
	node*middlenext=middle->next;
	middle->next=NULL;
	root=mergesort(root);
	middlenext=mergesort(middlenext);
	node*op= merge(root,middlenext);
	return op;

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
	// print(root);
	node* op=mergesort(root);
	print(op);
	
	
	
	return 0;

}
