/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/

int binaryToInteger(int n, Node *head) {
    int num= 0; // Integer to store the final answer.
    //Node* p = head;
    while (head!= NULL) {
        num*= 2; //num=num*2+head->data
        num+=head->data;
        head= head->next; //move to the next node
    }
    return num;
}
The approach is simple, you have to take an integer to store the final answer, and iterate through the list and add the current element to “ans” and multiply ans by 2.

 

The steps are as follows:

 

    Take an integer “num” and initialize it with zero.
    Iterate through the list till we reach the last element:
        Multiply “num” by 2.
        Update “num = “head” -> data.
        Jump to the next node i.e. “head” = “head” -> next.
    Return “num”.

Time Complexity

O(N). Where N is the number of nodes in the list.

 

Since we are iterating through the list having n nodes,

Hence the time complexity is O(N).
Space Complexity

O(1).

 

We are not using any auxiliary space.

Hence the space complexity is O(1).
