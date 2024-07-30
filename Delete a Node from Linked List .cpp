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
	else{
		Node *temp=deleteNode(head->next,pos-1);
		head->next=temp;
	}
	return head;
}
