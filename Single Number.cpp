1.
#include <bits/stdc++.h> 
int occursOnce(vector<int> &a, int n){
    sort(a.begin(), a.end());
    for(int i =0;i<n;i+=2){
        if (a[i]!=a[i+1]){
            return a[i];
        }

    }
}
	
2.
#include <bits/stdc++.h>
int occursOnce(vector<int> &nums, int n){
sort(nums.begin(), nums.end());
if(nums.size()==1) return nums[0];
for(int i=0; i<nums.size()-1; i++){
if(nums[i] == nums[i+1])
i=i+1;
else return nums[i];
}
return nums[nums.size()-1];
}
