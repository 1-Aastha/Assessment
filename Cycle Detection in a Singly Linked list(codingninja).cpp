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
#include <unordered_set>//header file
//find function to check if the current node is in set
//find() in C++ is a function that helps to search an element and returns the first occurrence of the element searched inside a specified range
//find function mein check krte hain ki current end ke equal nhi hai 
bool detectCycle(Node *head)
{
	//	container stores the contents of linked list, it is called node
    //container hoga node type ka pointer
      unordered_set<Node*>p;//Create an unordered set to store pointers to the nodes you visit.
      Node*p1=head;//create a pointer that points to the first node of linked list and stores its address
      /*Traverse the List and Check for Cycles
     Start with the head of the list and iterate through each node.
    For each node, check if it is already present in the unordered_set. If it is, that means the list contains a cycle, and you return true.
    If the node is not in the set, insert it into the set and move to the next node.*/
      while(p1!=NULL){
        if (p.find(p1) != p.end()) { //Check if the current node is already in the set
          return true;//cycle found
        }
        p.insert(p1); // Insert the current node into the set, insert the address of particular node in the set
        p1 = p1->next;//move to next node
      }
      return false;//if p1 is null i.e. we reach the end of the list return false i.e no cycle found
}
