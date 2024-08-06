class Solution {
public:
    stack<int>s1;//operand stack
    stack<char>s2;//operator stack
         
    int precedence(char ch){
        if(ch=='+'|| ch=='-')
            return 1;
        else //if(ch=='*'||ch=='/')
        return 2;
        //agr parentheses ke sath ques aye toh  else return 0
    }
    int doProcess(){
        int a=s1.top();
        s1.pop();
        int b=s1.top();
        s1.pop();
        char ch=s2.top();
        s2.pop();
        if(ch=='+')
        return b+a;
         else if(ch=='-')
        return b-a;
         else if(ch=='*')
        return b*a;
        else
        return b/a;
    }    
    int calculate(string s) {
        for(int i=0;i<s.size();i++){ //isdigit() function 
            if(s[i]==' ')
            continue;
            else if(isdigit(s[i])){
             int val=0;
             while(i<s.size() && isdigit(s[i])){
                val=val*10+(s[i]-'0');
                i++;
             }
             s1.push(val);
             i--;

            }
            else //(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
            {
                while (!s2.empty() && precedence(s2.top()) >= precedence(s[i])) {
                    s1.push(doProcess());
                }
                s2.push(s[i]);
            }
        }

        // Process remaining operators
        while (!s2.empty()) {
            s1.push(doProcess());
        }

        return s1.top();
    }
};
