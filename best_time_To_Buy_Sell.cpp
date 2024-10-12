class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0){
            return 0;
        }
        int profit=0;
        int maximum=0;
        int minimum=prices[0];
        for(auto stockp:prices){
            minimum=min(minimum,stockp);
            profit=stockp-minimum;
            maximum=max(maximum,profit);
        }
        return maximum;
    }
};