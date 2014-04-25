class Solution {
public:
    void nextPermutation(vector<int> &num) {
    	int len = num.size();
        int i = len - 2;
        while(i >= 0 && num[i] >= num[i + 1]) --i;
        if(i >= 0){
        	int j = len - 1;
        	while(num[j] <= num[i]) --j;
        	int temp = num[j];
        	num[j] = num[i];
        	num[i] = temp;
        }
        for(int k = 1; k <= (len - 1 - i) / 2; ++k){
        	int temp = num[i + k];
        	num[i + k] = num[len - k];
        	num[len - k] = temp;
        }
        return;
    }
};
