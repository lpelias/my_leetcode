class Solution {
public:
    int numDecodings(string s) {
        if(s.size() == 0) return 0;
        if(s[0] == '0') return 0;
        if(s.size() == 1) return 1;

        int len = s.size();
        int n, n1 = 1, n2 = 1;
        
        for(int i = 1; i < len; ++i){
        	if(s[i] == '0'){
        		if((s[i-1] != '1')&&(s[i-1] != '2')){
        			return 0;
        		}else{
        			n = n2;
        		}
        	}else{
        		if(s[i-1] == '0'){
        			n = n1;
        		}else{
        			if((s[i-1] == '1')||((s[i-1] == '2')&&(s[i] <= '6'))){
        				n = n1 + n2;
        			}else{
        				n = n1;
        			}
        		}
        	}
        	n2 = n1;
        	n1 = n;
        }
        return n;
    }
};
