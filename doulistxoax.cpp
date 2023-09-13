#include <iostream>
using namespace std;
struct node {
    int data;
    node *next;
    node*pre;
};

struct doulist {
    node*head;
    node*tail;
};

doulist*createlist(int x) {
    doulist*l=new doulist;
    l->head=new node;
    l->head->data=x;
    l->head->pre=NULL;
    l->head->next=NULL;
    l->tail=l->head;
    return l;
}

doulist *addtail(doulist*l,int x) {
    node*temp=new node;
    temp->data=x;
    temp->next=NULL;
    temp->pre=l->tail;
    l->tail->next=temp;
    l->tail=temp;
    return l;
}

doulist *deletehead(doulist*l) {
    node*p=l->head->next;
    node*temp=l->head;
    p->pre=NULL;
    l->head=p;
    delete(temp);
    return l;
}

doulist *deletetail(doulist*l) {
    node*p=l->tail->pre;
    node*temp=l->tail;
    p->next=NULL;
    l->tail=p;
    delete(temp);
    return l;
}

doulist *deleteat(doulist*l,int k) {
    node*p=l->head;
    for (int i=0;i<k-1;i++) {
        p=p->next;
    }
    node*temp=p->next;
    node*p2=temp->next;
    p->next=p2;
    p2->pre=p;
    delete(temp);
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
    cin>>k;
    if(k==0) {
        l=deletehead(l);
    }
    else if (k==n-1) {
        l=deletetail(l);
    }
    else {
        l=deleteat(l,k);
    }
    printlist(l);
    return 0;
}
