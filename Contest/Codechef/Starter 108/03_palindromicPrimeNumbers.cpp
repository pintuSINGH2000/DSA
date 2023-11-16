// A palindromic prime number is a positive integer that is both a prime number (meaning it has exactly two divisors: 1 and itself)
// and a palindrome in base 
// 10 (meaning it reads the same both backwards and forwards).
// Leading zeros are not considered when determining if a number is a palindrome (so 20 is not a palindrome, 
// even though it can be written as 020).

// You are given an integer N.Consider the first N palindromic prime numbers. How many of them have an even number of digits,
// and how many of them have an odd number of digits?

// {2, 3, 5, 7, 11, 101, 131, 151, 181, 191, 313, 353, 373, 383, 727, 757, 787, 797, 919, 929, 10301,
// 10501, 10601, 11311, 11411, 12421, 12721, 12821, 13331, 13831, 13931, 14341} 
// only one even count digit is their 

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	   int n;
	    cin>>n;
	    if(n<=4){
	        cout<<0<<" "<<n<<"\n";
            continue; 
	    }
	    cout<<1<<" "<<n-1<<"\n";
	}
	return 0;
}