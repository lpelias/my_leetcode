class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        if(n == 0) return 0;
        int read = 0, write = 0;
        while(read < n){
        	if(A[read] != elem){
        		A[write] = A[read];
        	}else{
        		while((read < n)&&(A[read] == elem)){
        			++read;
        		}
        		if(read == n) break;
        		A[write] = A[read];
        	}
        	++read;
        	++write;
        }
        return write;
    }
};
