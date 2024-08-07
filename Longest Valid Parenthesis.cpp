/*Solution1 by stack
create a stack
max=0
push value -1 in the staclk because initially stack is empty so by default stack is put to -1
Iterate all the elements of string from beginning to end by one by one:
1.if the char is opening bracket '(' push the index of it into stack
2.otherwize 
  1.remove the top element from the stack
  2.check stack is empty
    1.if empty put that char index into stack
    2.find the maximum between maximum and curernt_index-stack.top()->m=max(m,
    */
//this is o(n) approach but it takes more space->time ke basis pe acha hai
class Solution {
public:
    int longestValidParentheses(string s) {
        
        stack<int> s1;
        s1.push(-1);//agr starting mein closing ) mil jaye toh
        int max_len = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                s1.push(i);
            } else {
                s1.pop();
                if (s1.empty()) {
                    s1.push(i);
                } else {
                    max_len = max(max_len, i - s1.top());
                }
            }
        }

        return max_len;      
    }
};

/*algo
   1. Initialize a Stack:
        A stack s1 is used to store indices of the characters in the string.
        Start by pushing -1 onto the stack. This serves as a base index for calculating the length of valid substrings.

   2. Iterate through the String:
        Loop through each character in the string using its index i.

    3.Handle Opening Parentheses (:
        If the current character is (, push its index i onto the stack.

   4. Handle Closing Parentheses ):
        If the current character is ), perform the following steps:
            Pop the top index from the stack.
            Check if the stack is empty after the pop:
                If it is empty, push the current index i onto the stack. This resets the base index for the next valid substring.
                If it is not empty, calculate the length of the current valid substring using the formula i - s1.top(). Update max_len if this length is greater than the previously recorded maximum length.

    5.Return the Maximum Length:
        After processing all characters in the string, max_len contains the length of the longest valid parentheses substring.

The stack helps track the indices of unmatched opening parentheses and serves as a reference point for calculating the length of valid substrings when matched pairs of parentheses are found. The initial -1 ensures that substrings starting from the beginning of the string are handled correctly.
*/

//Solution 2 without stack for better space complexity
class Solution {
public:
    int longestValidParentheses(string s) {
        int maxi=0;
        int right = 0;
        int left=0;
        for(int i=0; i<s.size(); i++){
           
            if(s[i]=='('){
                left++;
            }else if(s[i]==')'){
                right++;
            }

            if(left==right){
                maxi=max(maxi, 2*left);
            } else if(right>left ){
                right=0;
                left=0;
            }
        }
        left=0;
        right=0;
        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] == '(') {
                left++;
            } else if(s[i] == ')') {
                right++;
            }
            
            if(left == right) {
                maxi = max(maxi, 2 * left);
            } else if(left > right) {
                left = right = 0;
            }
        }

        return maxi;
          
    }
};


