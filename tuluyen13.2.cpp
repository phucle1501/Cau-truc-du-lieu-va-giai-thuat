Node *convert(Node*head)
{
	if(head==NULL|| head->next==NULL) return head;
	
	Node*slow=head;
	Node*fast=head->next;
	while(fast !=NULL && fast->next=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	
	Node*headB=slow->next;
	slow->next=NULL;
	Node*currentA=head;
	Node*currentB=headB;
	while(currentA != NULL && currentB !=NULL)
	{
		Node*tempA=currentA->next;
		Node*tempB=currentB->next;
		
		currentA->next= currentB;
		currentB->next=tempA;
		
		currentA=tempA;
		currentB=tempB;
	}
	return head;
 } 
