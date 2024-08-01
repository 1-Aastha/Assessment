/****************************************************************

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

*****************************************************************/

#include<unordered_set>
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    unordered_set<Node*>p;
  
     while(firstHead!=NULL){
        p.insert(firstHead);
       firstHead=firstHead->next;
    }
    
    while (secondHead != NULL) {
        if (p.find(secondHead) != p.end()) {
            // If a node from the second list is found in the set, return it
            return secondHead;
        }
        secondHead = secondHead->next;
    }

    // If there is no intersection, return NULL
    return NULL;
}
