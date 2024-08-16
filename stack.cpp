//WAP TO STORE N ELEMENTS IN A STACK AND REMOVE THE FIRST OCCURANCE OF THE GIVEN VALUE FRIM THE STACK.

#include<bits/stdc++.h>
using namespace std;
int main() {
    stack<int> s;
    int n;
    cout<<"Enter the size of a stack : ";
    cin>>n;
    cout << "Enter the elements of the stack: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push(x);
    }
    s.pop();
    while(!s.empty()){
        cout<<s.top()<<"\t";
        s.pop();
    }

    return 0;
}
