// Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minProfit=prices[0];
        int maxProfit=0;
        for(int i=1;i<prices.size();i++){
            minProfit=min(prices[i],minProfit);
            maxProfit=max(maxProfit,prices[i]-minProfit);
        }
        return maxProfit;
    }
};

TC(n)
SC(1)
