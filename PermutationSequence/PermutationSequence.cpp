class Solution {
public:
    string getPermutation(int n, int k) {
    	--k;
    	int frac_n = 1;
    	ostringstream ret;
      for(int i = 1; i <= n; ++i) frac_n *= i;
      k = k % frac_n;
      bool* picked = new bool[n];
      for(int i = 0; i < n; ++i) picked[i] = false;
      for(int i = n; i >= 1; --i){
      	frac_n /= i;
      	int pos = k / frac_n;
      	int j = 0, count = 0;
      	while(1){
      		if(!picked[j]){
      			if(count == pos){
      				picked[j] = true;
      				break;
      			}
      			++count;
      		}
      		++j;
      	}
      	ret << j+1;
      	k = k % frac_n;
      }
      return ret.str();
    }
};
