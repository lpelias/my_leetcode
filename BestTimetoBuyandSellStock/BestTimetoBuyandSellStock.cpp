class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int len = prices.size();
        if(len == 0) return 0;
        int i = 0, low = prices[0], max_profit = 0;
        while(++i < len){
            if(prices[i] < low){
                low = prices[i];
            }else{
                max_profit = prices[i]-low>max_profit?prices[i]-low:max_profit;
            }
        }
        return max_profit;
    }
};
