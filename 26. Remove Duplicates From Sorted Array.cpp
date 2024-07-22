//1:
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       set <int>s1(nums.begin(),nums.end());
            nums=vector<int>(s1.begin(),s1.end());
            return s1.size();    
    }
};

//2:
vector<int> v2;
for(auto i =nums.begin();i<nums.end();i++){
    if(binary_search(i+1,nums.end(),*i)==false){
    v2.push_back(*i);
    }
}
      nums=v2;
      return nums.size();}
};

//3:
int j=1;
for(int i=1;i<nums.size();i++){//works on any type of array
 if(nums[i]!=nums[i-1]){
nums[j]=nums[i];
    j++;
            }
            }
            return j;

      
