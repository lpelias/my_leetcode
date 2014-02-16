class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int len = prices.size();
        if(len == 0) return 0;
        int i = 1, low = prices[0], total_profit = 0, max_profit = 0;
        while(i < len){ // descending
        	if(prices[i] < prices[i-1]){
        		low = prices[i];
        		total_profit += max_profit;
        		max_profit = 0;
        	}else{ // ascending / non-descending
        		max_profit = prices[i] - low;
        	}
        	++i;
        }
        total_profit += max_profit;
        return total_profit;
    }
};
