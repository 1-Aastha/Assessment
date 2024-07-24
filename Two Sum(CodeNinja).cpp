#include<vector>
#include<algorithm> //code ninja pe extra header files include krni pdti hain
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	//code in 0(n)
	//pair is a template which is a collection of heterogenous elements
	sort(arr.begin(),arr.end());
	vector<pair<int,int>>ob; //vector of type pair and pair of type int
	int start=0, end=n-1;
	while(start<end){
		if(arr[start]+arr[end]==target){
			ob.push_back(make_pair(arr[start],arr[end]));
			start++;
			end--;
		}
		else if(arr[start]+arr[end]>target)	
			end--;
			else if(arr[start]+arr[end]<target)	
			start++;
				}
				if(ob.empty())
				ob.push_back(make_pair(-1,-1));
return ob;		
}

