class Solution {
public:
    string convert(string s, int nRows) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function    
        if(nRows == 1) return s;
        int base = nRows*2 -2;
        int len = s.size();
        int i, j;
        string ret;
        for(i = 0; i != nRows; ++i){
        	for(j = 0; j != len; ++j){
        		int k = base - i;
        		if((j%base == i)||(j%base == k)){
        			ret.append(1, s[j]);
        		} // if
        	} // for
        } // for
        return ret;
    }
};
