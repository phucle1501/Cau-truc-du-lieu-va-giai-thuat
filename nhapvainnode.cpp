#include <iostream>
using namespace std;
struct node {
	int data;
	node*next;
};

node *createnode(int x) {
	node*temp=new node;
	temp->next=NULL;
	temp->data=x;
	return temp;
}

void printlist(node*l)
{
	node*p=l;
	while(p != NULL) {
		cout<<p->data<<" ";
		p=p->next;
	}
}

node *addElement(node*p,int x)
{
	node*temp=createnode(x);
	p->next=temp;
	return temp;
}

int main() {
	int n,x;
	cin>>n>>x;
	node*l=createnode(x);
	node*p=l;
	for (int i=1;i<n;i++)
	{
		cin>>x;
		p=addElement(p,x);
	}
	printlist(l);
	return 0;
}
