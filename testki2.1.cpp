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
}

node*addelement(node*p,int x) {
	node*temp=createnode(x);
	p->next=temp;
	return temp;
}
node *addtail(node*l,int x) {
	node*p=l;
	while (p->next !=NULL) {
		p=p->next;
	}
	node*temp= createnode(x);
	temp->data=x;
	temp->next=NULL;
	p->next=temp;
	return l;
}
void printlist(node*l) {
	node*p=l;
	while ( p!=NULL) {
		cout<<p->data<<" ";
		p=p->next;
	}
}
node*deletebigger(node*l,int k) {
	node*p=l;
	node*ans = new node;
	while (p!=NULL) {
		if(p->data<=k) {
			ans=createnode(p->data);
			p=p->next;
			break;
		}
		p=p->next;
	} 
	while (p!=NULL) {
		if(p->data<=k) {
			ans=addtail(ans,p->data);
		}
		p=p->next;
	}
	return ans;
}
node* getnode (node*l,int k) {
	node*p=l;
	for (int i=1;i<k;i++) {
		p=p->next;
	}
	return p;
}

int main() {
	int n,x,k;
	cin>>n>>x;
	node*l=createnode(x);
	node*p=l;
	for (int i=1;i<n;i++) {
		cin>>x;
		p=addelement(p,x);
	}
	cin>>k;
	p=getnode(l,k);
	cout<<p->data;
	l=deletebigger(l,k);
	printlist(l);
	return 0;
}
