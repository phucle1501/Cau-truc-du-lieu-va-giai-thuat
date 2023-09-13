#include <iostream>
using namespace std;
// khai bao danh sach lien doi doi (double linked lít)
struct node {
    int data;
    node*next;
    node*pre;
};
struct doulist {
    node*head;
    node*tail;
};
// tao 1 node double linked list
doulist *createlist(int x) {
    doulist*l=new doulist;
    l->head=new node;
    l->head->data=x;
    l->head->pre=NULL;
    l->head->next=NULL;
    l->tail=l->head;
    return l;
}
// them phan tu dau 
doulist *addhead(doulist*l,int x) {
    node*temp=new node;
    temp->data=x;
    temp->pre=NULL;
    temp->next=l->head;
    l->head->pre=temp;
    l->head=temp;
    return l;
}

// them phan tu cuoi
doulist*addtail(doulist*l,int x) {
    node*temp=new node;
    temp->data=x;
    temp->next=NULL;
    temp->pre=l->tail;
    l->tail->next=temp;
    l->tail=temp;
    return l;
}

// in
void printlist(doulist*l) {
    node*p=l->head;
    while ( p!=NULL) {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main() {
    int n;
    cin>>n;
    doulist*l = createlist(1);
    for (int i=2;i<=n;i++) {
        l=addhead(l,i);
        l=addtail(l,i);
    }
    printlist(l);
    return 0;
}
