#include <bits/stdc++.h> 
/****************************************************************
    Following is the Linked List node structure

    class Node {
    public:
        int data;
        Node *next;
        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

1:normal two pointer
Node *removeNodes(Node *head, int k) {
    if(head==NULL)
    return NULL;
    while(head && head->data==k)
     {
         head=head->next;
     }
    Node *current=head;
    Node *previous= NULL;
     while(current!=NULL){
         if(current->data==k){
             previous->next=current->next;
         } else {
             previous = current;
         }
         current = current->next;
     }
     return head;
}

2: recursion

       if (head == NULL){
        
        
        return NULL;
    }
    head -> next = removeNodes(head->next, k);
    if (head -> data == k){
        return head -> next;
    }  
          
     return head;
}
