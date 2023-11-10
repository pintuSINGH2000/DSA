// Palindrome String

class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    int i=0,j=S.length()-1;
	    while(i<j){
	        if(S[i]!=S[j]) return 0;
	        i++;
	        j--;
	    }
	    return 1;
	}

};


TC(n)
SC(1)