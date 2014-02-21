class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
    	if(matrix.size() == 0 || matrix[0].size() == 0) return false;
        int n = matrix.size(), m = matrix[0].size();
        if(target < matrix[0][0] || target > matrix[n-1][m-1]) return false;
        int first = 0, last = n, mid, i;
        while(first != last-1){
        	mid = (first+last)/2;
        	if(matrix[mid][0] == target){
        		return true;
        	}else if(matrix[mid][0] < target){
        		first = mid;
        	}else{
        		last = mid;
        	}
        }
        i = first;
        first = 0, last = m;
        while(first != last-1){
        	mid = (first+last)/2;
        	if(matrix[i][mid] == target){
        		return true;
        	}else if(matrix[i][mid] < target){
        		first = mid;
        	}else{
        		last = mid;
        	}
        }
    	if(matrix[i][first] == target){
    	    return true;
    	}else{
    	    return false;
    	}
    }
};
