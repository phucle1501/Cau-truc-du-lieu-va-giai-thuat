#include <iostream>
using namespace std;
// khai bao node
struct node {
	int data;
	note*next;
};
// tao moi 1 node 
node *createnode(int x)
{
	node*temp=new node; // tao moi 1 node
	temp->next=NULL; // node nay chua tro den phan tu khac nen next nhan gia tri null;
	temp->data=x; // gan gia tri cho node;
	return temp;
}

node **addelement(node *p,int x)
{
	node*temp=createnode(x); // tap 1 gia tri node moi co gia tri x
	p->next=temp; // them node do vao cuoi danh sach
	return temp; // gia ve temp vi temp gio la node cuoi
}

// duyet cac phan tu trong danh sach sach lien ket ;
// in node;
	node*p=l;
while(p!=NULL)
{
	// xu li p
	p=p->next;
}



