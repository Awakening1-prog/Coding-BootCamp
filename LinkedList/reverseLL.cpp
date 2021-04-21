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
void reverse(node* &root)
{
	if(root==NULL)
	{
		return ;
	}
	node* curr=root;
	node*prev=NULL;
	node*next1=NULL;
	while(curr)
	{
		next1=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next1;
	}
	root=prev;
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
	int arr[100000];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	node *root;
	root=NULL;
	for(int i=0;i<n;i++)
	{
		insert(root,arr[i]);
	}
	reverse(root);
  print(root);
	
	
	return 0;

}
