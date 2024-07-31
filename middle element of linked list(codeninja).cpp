/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
Node *findMiddle(Node *head) {
    Node *p=head; //to traverse through the linked list,initially points to head
          int i=0; //to count number of nodes
     while(p!=NULL) //loop to check if linked list is null
{
        i++; //increment number of nodes 
        p=p->next;//pointer points to next node

}
int mid=i/2;//calculating middle node

Node *c=head;//one more pointer to find the mid node
while (mid--) { //mid decrement loop
        c = c->next;//pointer points to next node
}
return c;
}
