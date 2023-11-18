// Longest Prefix Suffix
// Given a string of characters, find the length of the longest proper prefix which is also a proper suffix.


class Solution{
  public:		
	int lps(string s) {
	    int i=1,len=0,n=s.length();
	 
	    vector<int> v(n);
	    v[0]=0;
	    i=1;
	    while(i<n){
	        if(s[i]==s[len]){
	            len++;
	            v[i]=len;
	            i++;
	        }else{
	            if(len!=0){
	                len=v[len-1];
	            }else{
	                v[i]=0;
	                i++;
	            }
	        }
	    }
	    return v[n-1];
	}
};

TC(n)
SC(n)