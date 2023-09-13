#include <iostream>
using namespace std;
struct node {
	int data;
	node*next;
};

node *createnode(int x) {
	node*temp=new node;
	temp->data=x;
	temp->next=NULL;
	return temp;
}

node* addelement(node*p,int x) {
	node*temp= createnode(x);
	p->next=temp;
	return temp;
}

void printlist(node*l) {
	node*p=l;
	while ( p!=NULL) {
		cout<<p->data<<" ";
		p=p->next;
	}
}

node*addhead(node*l,int x) {
	node*temp=new node;
	temp->data=x;
	temp->next=l;
	l=temp;
	return l;
}

node*addtail(node*l,int x) {
	node*p=l;
	while ( p->next !=NULL) {
		p=p->next;
	}
	node*temp= new node;
	temp->data=x;
	temp->next=NULL;
	p->next=temp;
	return l;
}

node *addat(node*l,int k,int x) {
	node*p=l;
	for (int i=1;i<k-1;i++) {
		p=p->next;
	}
	node*temp= new node;
	temp->data=x;
	temp->next=p->next;
	p->next=temp;
	return l;
}

node *deletehead(node*l) {
	node*p=l;
	p=p->next;
	delete(l);
	return p;
}

node* deletetail(node*l) {
	node*p=l;
	while ( p->next->next !=NULL) {
		p=p->next;
	}
	delete(p->next);
	p->next=NULL;
	return l;
}
int main() {
	int n,x;
	cin>>n>>x;
	node*l=createnode(x);
	node*p=l;
	for (int i=1;i<n;i++) {
		cin>>x;
		p=addelement(p,x);
	}
	cout<<" mang luc dau"<<endl;
	printlist(l);
	int k;
	cin>>k>>x;
	cout<<"mang luc sau"<<endl;
	if( k==0) {
		l=addhead(l,x);
	}
	else if (k==n) {
		l=addtail(l,x);
	}
	else {
		l=addat(l,k,x);
	}
	printlist(l);
	cout<<endl;
	l=deletehead(l);
	printlist(l);
	return 0;
	
}

