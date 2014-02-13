class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ret;
        ret.push_back(0);
        if(n == 0) return ret;
        ret.push_back(1);
        if(n == 1) return ret;
        for(int i = 1; i < n; ++i){
        	int len = ret.size();
        	for(int j = len-1; j >= 0; --j){
        		int newInt = ret[j] | (1 << i);
        		ret.push_back(newInt);
        	}
        }
        return ret;
    }
};
