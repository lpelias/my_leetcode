class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int len = prices.size();
        if(len < 2) return 0;
        int* max_forward = new int[len];
        int* max_backward = new int[len];
        int i = 0, low = prices[0], max_profit = 0, curr_profit;
        max_forward[0] = max_backward[len - 1] = 0;
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
        low = 0 - prices[len-1];
        max_profit = 0;
        while(--i >= 0){
        	int val = 0 - prices[i];
        	if(val < low){
        		low = val;
        	}else{
        	    curr_profit = val - low;
        		if(curr_profit > max_profit){
        			max_profit = curr_profit;
        		}
        	}
        	max_backward[i] = max_profit;
        }
        max_profit = 0;
        i = 0;
        for(i = 0; i < len; ++i){
            curr_profit = max_forward[i] + max_backward[i];
        	if(curr_profit > max_profit){
        		max_profit = curr_profit;
        	}
        }
        delete[] max_forward;
        delete[] max_backward;
        return max_profit;
    }
};
