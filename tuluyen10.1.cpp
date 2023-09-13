#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int x) {
    Node* temp = new Node;
    temp->data = x;
    temp->next = NULL;
    return temp;
}

void addNode(Node*& head, int x) {
    if (head == NULL) {
        head = createNode(x);
        return;
    }
    Node* p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = createNode(x);
}

void insertNode(Node*& head, int k, int x) {
    if (k == 0) {
        Node* temp = createNode(x);
        temp->next = head;
        head = temp;
        return;
    }
    Node* p = head;
    for (int i = 0; i < k - 1 && p != NULL; i++) {
        p = p->next;
    }
    if (p == NULL) {
        return;
    }
    Node* temp = createNode(x);
    temp->next = p->next;
    p->next = temp;
}

void printList(Node* head) {
    Node* p = head;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
}

int main() {
    int n;
    cin >> n;
    Node* head = NULL;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        addNode(head, x);
    }
    int k, x;
    cin >> k >> x;
    insertNode(head, k, x);
    printList(head);
    return 0;
}

/* 1. Nh?p v�o s? nguy�n duong n.
 2. T?o m?t danh s�ch li�n k?t don r?ng.
3. V�ng l?p i t? 1 d?n n:
	- Nh?p v�o m?t s? nguy�n x.
	- Th�m ph?n t? x v�o danh s�ch li�n k?t don.
4. Nh?p v�o hai s? nguy�n k v� x.
5. N?u k = 0:
	- Th�m x v�o d?u danh s�ch li�n k?t don.
6. Ngu?c l?i n?u k = n:
	- Th�m x v�o cu?i danh s�ch li�n k?t don.
7. Ngu?c l?i:
	- T?o m?t con tr? p tr? d?n ph?n t? th? k-1 trong danh s�ch li�n k?t don.
	- T?o m?t ph?n t? m?i v?i gi� tr? x.
	- G�n ph?n t? m?i v�o sau ph?n t? th? k-1.
8. In ra m�n h�nh c�c ph?n t? trong danh s�ch li�n k?t don, sau m?i ph?n t? l� m?t kho?ng tr?ng */

