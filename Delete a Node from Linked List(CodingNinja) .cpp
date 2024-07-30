/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
//sol1:
Node *deleteNode(Node *head, int pos)
{
    if(head==NULL){
		return head;
	}
	if(pos==0){
		Node *temp=head;
		head=head->next;
		delete temp;
	}
	else{//or(if(pos>0)
		Node *temp=deleteNode(head->next,pos-1);
		head->next=temp;
	}
	return head;
}

//solution 2
Node *deleteNode(Node *head, int pos)
{
    if(head==NULL){
		return head;
	}
	else if(pos==0){
		//Node *temp=head;
		head=head->next;
		//head=head->next;
		//delete temp;
	}
	else {//if(pos>0){ 
		//Node *temp=deleteNode(head->next,pos-1);
		//head->next=temp;
		int i=0;
		Node *temp=head;
		while(i<pos-1 && temp!=NULL){
			temp=temp->next;
			i++;
		}
		if(temp==NULL || temp->next==NULL)
		return head;
		else
		temp->next=temp->next->next;
		return head;
	}
	return head;
}

