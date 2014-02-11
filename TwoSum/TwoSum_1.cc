class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        vector<int> ret;
        vector<int>::size_type i, j, len;
        int looking_for = 0;
        len = numbers.size();
        
        for(i = 0; i != len - 1; ++i){
        	if(numbers[i] <= target){
        		looking_for = target - numbers[i];
        		for(j = i+1; j != len; ++j){
        			if(numbers[j] == looking_for){
        				ret.push_back(i+1);
	       				ret.push_back(j+1);
	       				return ret;
        			}
	        	}
    	    }
    	}
    }
};
