class Solution {
public:
    int singleNumber(int A[], int n) {
        int ret = 0;
        while(--n >= 0){
            ret ^= A[n];
        }
        return ret;
    }
};
