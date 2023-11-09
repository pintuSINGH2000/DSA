// Problem
// You are given two integers N and K.

// f(x)= xmodk * (n-x)modk., where mod denotes the modulo operator.
// Find an integer X such that the value of F(X) is the maximum over all 0<=x<=N.
// If there are multiple answers, you may print any.

// intitution 
// here mid vlaue always give max result 
// when n<k then n is max and 0 is min so ans is n/2;
// when we do modulo if n%k==k-1 or n%k==0 in both case max will be k and min will be 0 then ans is k/2;
// when 0<a<k-1 in this maximum will be (a+k)/2 and a is smallest and a+k will be max so ans is their mid.

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t>0){
	    int n,k;
	    cin>>n>>k;
        int a=n%k;
        int x=0;
        if(n<=k) x=n>>1; 
        else if(a==k-1) x=k>>1; 
        else x=(a+k)>>1; 
        cout<<x<<endl;
	    t--;
	}
	return 0;
}

TC(1)
SC(1)