#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
     int maxProfit = 0;
    int n = prices.size();
    
    
    for(int i = 0;i < n - 1 ; i++){

        
        int buy = prices[i], curMaxProfit = 0;

        
        for(int j = i + 1; j < n; j++){
            curMaxProfit = max(curMaxProfit, (prices[j] - buy) );
        }

       
        maxProfit = max(maxProfit, curMaxProfit);
    }

    return maxProfit;
}
//partially accepted on codeninjas
