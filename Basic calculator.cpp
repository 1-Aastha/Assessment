/*
3 cases:
1.expression only contains digits
-expression has only plus+
2.expression doesn't contain any brackets
3.expression contain brackets
4. expression may contain unary operator (-) minus*/
class Solution {
public:
int calculate(string s){
    stack<int>result;//stack is only used here to store the data of previous expression
    int sum=0, num=0,sign=1;
    for(int i =0;i<s.length();i++){
        //case 1
        if(isdigit(s[i]))
        num=num*10+(s[i]-'0');
        else if(s[i]=='+'){
            sum+=num*sign;
            num=0;
            sign=1;//mtlb usko plus mila toh 1 hua
        }
       else if (s[i]=='-'){
                sum+=num*sign;
                num=0;
                sign=-1;//minus mila toh -1
            }
else if(s[i]=='('){
    
     result.push(sum);//ek stack lenge jisme sum aur sign store hoga
     result.push(sign);
     sum=0;//then sum num sign default value pe chle jayenge
     num=0;
     sign=1;

}
else if (s[i]==')'){
    sum+=num*sign;
    num=0;
    int last_sign=result.top();
    result.pop();//stack mein jo sign aur sum hain unko pop krke unko bhi add krna baki expression ke sath
    int last_sum=result.top();
    result.pop();
    sum=sum*last_sign;
    sum=sum+last_sum;
}
        }

    
      sum+=num*sign;
    return sum;
    
          
        
    }
    

};
