class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        vector<int> ret;
        vector<int>::size_type i, len = numbers.size();
        map<int, int> rec;
        
        for(i = 0; i < len; ++i){
        	map<int, int>::iterator found = rec.find(target - numbers[i]);
        	if(found == rec.end()){ // not found
        		rec.insert(pair<int, int>(numbers[i], i));
        	}else{ // found
        	    ret.push_back(rec[target - numbers[i]]+1);
        		ret.push_back(i+1);
        		return ret;
        	}
        }
        return ret;
    }
};
