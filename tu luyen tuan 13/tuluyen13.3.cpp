
 bool compareLists(Node* headA, Node* headB) {
    while (headA != NULL && headB != NULL) {
        if (headA->value != headB->value) return false;
        headA = headA->next;
        headB = headB->next;
    }
    return (headA == NULL && headB == NULL);
}
