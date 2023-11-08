// Problem
// Alice and Bob play a game.
// They start with the integer N and take turns, with Alice going first.
// On their turn, a player must select an odd prime factor p of N, and subtract it from N (so N changes to N−p).
// The player who cannot make a move loses (that is, if either N=0 or N has no odd prime factors).
// If Alice and Bob play optimally, who wins the game?

//intution 
// if n is even or n==1 they not have primefactor so bob win else alice win
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n%2==0 || n==1){
	        cout<<"Bob"<<"\n";
	    }else{
	        cout<<"Alice"<<"\n";
	    }
	}
	return 0;
}