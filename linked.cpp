Node *sort(Node*head) {
	if(head== nullptr || head->next== nullptr) {
		return head;
	}
	Node*slow=head;
	Node*fast=head->next;
	while(fast != nullptr && fast->next !=nullptr) {
		slow=slow->next;
		fast=fast->next->next;
	}
	Node*second_half=slow->next;
	slow->next=nullptr;
	if(second_half !=nullptr) {
		second_half ->prev=nullptr;
	}
	Node*left_side=sort(head);
	Node*right_side=sort(second_half);
	Node dummy(0);
	dummy.next=nullptr;
	dummy.prev=nullptr;
	Node*current=&dummy;
	while(left_side !=nullptr && right_side !=nullptr) {
		if(left_side ->value<right_side ->value) {
			current->next=left_side;
			left_side->prev=current;
			left_side=left_side->next;
		}
		else {
			current->next=right_side;
			right_side->prev=current;
			right_side=right_side->next;
		}
		current=current->next;
	}
	if(left_side !=nullptr) {
		current->next=left_side;
		left_side ->prev=current;
	}
	else if(right_side !=nullptr) {
		current->next=right_side;
		right_side->prev=current;
	}
	return dummy.next;
} 
