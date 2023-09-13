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

/* 1. Nh?p vào s? nguyên duong n.
 2. T?o m?t danh sách liên k?t don r?ng.
3. Vòng l?p i t? 1 d?n n:
	- Nh?p vào m?t s? nguyên x.
	- Thêm ph?n t? x vào danh sách liên k?t don.
4. Nh?p vào hai s? nguyên k và x.
5. N?u k = 0:
	- Thêm x vào d?u danh sách liên k?t don.
6. Ngu?c l?i n?u k = n:
	- Thêm x vào cu?i danh sách liên k?t don.
7. Ngu?c l?i:
	- T?o m?t con tr? p tr? d?n ph?n t? th? k-1 trong danh sách liên k?t don.
	- T?o m?t ph?n t? m?i v?i giá tr? x.
	- Gán ph?n t? m?i vào sau ph?n t? th? k-1.
8. In ra màn hình các ph?n t? trong danh sách liên k?t don, sau m?i ph?n t? là m?t kho?ng tr?ng */

