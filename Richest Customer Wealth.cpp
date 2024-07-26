class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth=0;
        for(int i=0;i<accounts.size();i++){
            int maxWealth=0;
            for(int j=0;j<accounts[i].size();j++){
                maxWealth+=accounts[i][j];
            }
            if(maxWealth>=wealth){
                wealth=maxWealth;
            }
        }
        return wealth;
    }
};
