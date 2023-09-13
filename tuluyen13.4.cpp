void print(Node *head)
{
	while(head !=NULL)
	{
		cout<<head->value<<" ";
		head=head->next;
	}
	cout<<endl;
 } 
 
 Node*insertHead(Node*head, int value)
 {
 	Node*newnode=new Node();
 	newnode->value=value;
 	newnode->next=head;
 	return newnode;
 }
 
 Node*inserttail(Node*head,int value)
 {
 	Node*newnode=new Node();
 	newnode->value=value;
 	newnode->next=NULL;
 	if(head==NULL)	return newnode;
 	
 	Node*current=head;
 	while(current->next !=NULL)
 	{
 		current=current->next;
	 }
	 current->next=newnode;
	 return head;
 }
 
 Node*deleteNode(Node*head,int pos)
 {
 	if(pos==0)
 	{
 		Node*temp=head;
 		head=head->next;
 		delete temp;
 		return head;
	 }
  } 
  
  int getalue(Node*head,int pos)
  {
  	for (int i=0;i<pos,i++)
  	{
  		head=head->next;
	  }
	  return head->value;
  }
