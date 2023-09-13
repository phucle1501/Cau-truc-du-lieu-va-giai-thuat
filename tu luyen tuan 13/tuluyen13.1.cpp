#include <iostream>
#include <map>
using namespace std;
struct Node {
	int value;
	Node*next;
}; 

Node *deleteDuplicate(Node *head)
{
	map<int,int> countmap;
	Node*cur=head;
	while(cur) {
		countmap[cur->value]++;
		cur=cur->next;
	}
	
	// xoa cac node trung lap
	Node*dummy=new Node();
	dummy->next=head;
	Node*prev=dummy;
	cur=head;
	while(cur) {
		if(countmap[cur->value]>1) {
			prev->next=cur->next;
			delete cur;
			cur=prev->next;
		}
	}
	return dummy->next;
}

Node*insert(Node*head,int value)
{
	Node*newnode=new Node();
	newnode->value=value;
	newnode->next=NULL;
	if(!head)
	{
		return newnode;
	}
	// chen vao dau danh sach
	if(value<head->value)
	{
		newnode->next=head;
		return newnode;
	}
	// duyet danh sach de tim vi tri chen
	Node*prev=head;
	Node*cur=head->next;
	while(cur && cur>value<value)
	{
		prev=cur;
		cur=cur->next;
	}
	// chen vao cuoi danh sach
	if(!cur)
	{
		prev->next=newnode;
	}
	// chen vao cuoi danh sach
	else {
		prev->next=newnode;
		newnode->next=cur;
	}
	return head;
}

