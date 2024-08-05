class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        for (int i = 0; i < s.length(); i++){
            if(s1.empty()){
                s1.push(s[i]);
              }
              else if(s1.top()=='('&& s[i]==')'|| s1.top()=='{'&& s[i]=='}' ||s1.top()=='['&& s[i]==']'){
                s1.pop();
              }
              else{
                s1.push(s[i]);
              }
        }
        if(s1.empty()){
            return true;
        }
        return false;
    }
};


//Algo:
//Initialize an empty stack
//Iterate all the char of string one by one:
//step1:if the char is an opening bracket push it into the stack
//step2:else if the current char is a closing bracket and the top of the stack contains opening  bracket of the same type then remove the top element of the stack else return false

//After iteration complete return true(means your expression is valid)
