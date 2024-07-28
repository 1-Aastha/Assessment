class Solution {
public:
    string sortSentence(string s) {
        string word; 
        vector<string>v(10); //declare a vector to store the word we have seen till noe
        for(int i=0;i<s.size();i++){
            if(s[i]>=48 && s[i]<=57 ){ //to check if s[i] is a number or not as the range of number in c++ is 48-57
                v[s[i]-48]=word+" ";//subtracting 48 from s[i] because s ki value starts from 48  //aur uski jagah ek particular word store ho jayega along with a space as we need space between words in the sentence
                word= "";//make the word blank so next time we do iteration then it again starts from nothing
                i++; //next character will be space so we will skip that and i++ will again start iterating over the characters in the string s
            }
            else 
            word+=s[i];
        }
        string s1;
        for(string i:v){ //iterate over string i in vector v
            s1+=i; //store the string i in s1 and then return s1 which will be the original sentence and when we do s1+=i then we will have the sentence we want but in the end there will be a space and the question says that there shouldn't be any traling spaces in s so we do popback on s1 to remove end spaces
        }
        s1.pop_back();//if we  don't do this then in the end of the sentence there will be space which will be added during this line  v[s[i]-48]=word+" ";
        return s1;
    }
};
