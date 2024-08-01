#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
#include<vector>
bool isPalindrome(LinkedListNode<int> *head) {
    vector<int> vec;
    LinkedListNode<int> *temp = head;
      while (temp != NULL) {
        vec.push_back(temp->data);
        temp = temp->next;
    }
    int start=0,end=vec.size()-1;//vector hai toh forward aur backward traverse kr skte hai but singly linked list mein backward traverse nhi kr skte
    
     while (start<end) {
        if (vec[start]!=vec[end]) //checking first and last index
            return false;
            start ++;//ek sath begining or end tkk traversing
            end--;//agr mid tkk chl gya toh palindrome hai
        
        
    }
    return true;
}
