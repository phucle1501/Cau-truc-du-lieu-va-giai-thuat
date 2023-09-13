#include <iostream>
using namespace std;
struct node {
    int data;
    node*next;
    node*pre;
};

struct doulist {
    node*head;
    node*tail;
};

doulist *createlist(int x) {
    doulist*l=new doulist;
    l->head=new node;
    l->head->data=x;
    l->head->pre=NULL;
    l->head->next=NULL;
    l->tail=l->head;
    return l;
}

// addhead 
doulist *addhead(doulist*l,int x) {
    node*temp=new node;
    temp->data=x;
    temp->pre=NULL;
    temp->next=l->head;
    l->head->pre=temp;
    l->head=temp;
    return l;
}

doulist*addtail(doulist*l,int x) {
    node*temp=new node;
    temp->data=x;
    temp->next=NULL;
    temp->pre=l->tail;
    l->tail->next=temp;
    l->tail=temp;
    return l;
}

doulist*addat(doulist*l,int k,int x) {
    node*p=l->head;
    for (int i=0;i<k-1;i++) {
        p=p->next;
    }
    node*temp=new node;
    temp->data=x;
    temp->pre=p;
    temp->next=p->next;
    p->next->pre=temp;
    p->next=temp;
    return l;
}

void printlist(doulist*l) {
    node*p=l->head;
    while ( p!=NULL) {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main() {
    int n,x,k;
    cin>>n>>x;
    doulist*l=createlist(x);
    for (int i=1;i<n;i++) {
        cin>>x;
        l=addtail(l,x);
    }
    cin>>k>>x;
    if(k==0) {
        l=addhead(l,x);
    }
    else if(k==n) {
        l=addtail(l,x);
    }
    else {
        l=addat(l,k,x);
    }
    printlist(l);
    return 0;
}
