class Solution {
public:
    int climbStairs(int n) {
    	if(n == 0) return 0;
    	if(n == 1) return 1;
    	return climbStairs_tail(n, 2, 1);
    } // climbStairs
    
    int climbStairs_tail(int a, int stair1, int stair2){
    	if(a == 2) return stair1;
    	return climbStairs_tail(a-1, stair1+stair2, stair1);
    }
};
