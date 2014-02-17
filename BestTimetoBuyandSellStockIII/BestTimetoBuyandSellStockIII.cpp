class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int len = prices.size();
        if(len < 2) return 0;
        int* max_forward = new int[len];
        int i = 0, low = prices[0], max_profit = 0, curr_profit = 0;
        max_forward[0] = 0;
        while(++i < len){
        	if(prices[i] < low){
        		low = prices[i];
        	}else{
        	    curr_profit = prices[i] - low;
        		if(curr_profit > max_profit){
        			max_profit = curr_profit;
        		}
        	}
        	max_forward[i] = max_profit;
        }
        i = len - 1;
        low = prices[len-1];
        max_profit = max_forward[len-1];
        while(--i >= 0){
        	if(prices[i] > low){
        		low = prices[i];
        	}else{
        	    curr_profit = low - prices[i];
        		curr_profit += max_forward[i];
        		if(curr_profit > max_profit){
        			max_profit = curr_profit;
        		}
        	}
        }
        delete[] max_forward;
        return max_profit;
    }
};
