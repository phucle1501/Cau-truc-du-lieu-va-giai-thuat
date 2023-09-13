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

void addElement(Node*& head, int x) {
    Node* temp = createNode(x);
    if (head == NULL) {
        head = temp;
        return;
    }
    Node* p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = temp;
}

void printList(Node* head) {
    Node* p = head;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
}

void printFromKToEnd(Node* head, int k) {
    Node* p = head;
    for (int i = 0; i < k; i++) {
        p = p->next;
    }
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
}

void printFromStartToK(Node* head, int k) {
    Node* p = head;
    for (int i = 0; i < k; i++) {
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
        addElement(head, x);
    }
    int k;
    cin >> k;
    printFromKToEnd(head, k);
    printFromStartToK(head, k);
    return 0;
}

