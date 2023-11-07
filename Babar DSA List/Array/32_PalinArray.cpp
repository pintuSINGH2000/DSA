// Palindromic Array

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	for(int i=0;i<n;i++){
    	    int reverseNum=reverse(a[i]);
    	    if(reverseNum!=a[i]) return 0;
    	}
    	return 1;
    }
    
    int reverse(int a){
        int num=a;
        int reverse=0;
        while(num>0){
            int rem=num%10;
            reverse=reverse*10+rem;
            num/=10;
        }
        return reverse;
    }
};