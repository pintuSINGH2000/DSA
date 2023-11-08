// Problem
// All of Chef's friends are playing fantasy cricket based upon the ODI World Cup, and Chef would like to join them.
// For a certain cricket match, Chef has decided upon his team of 11 players. However,
// he hasn't yet decided who should be the captain and who should be the vice-captain.

// He's narrowed his decision down to N players out of the 11, from which he'll choose one to be the captain 
// and one to be the vice captain.How many different choices does he have?

//Intitution
//for chosing caption nc1 and for chosing vice-caption n-1c1.

#include <iostream>
using namespace std;


int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    cout<<n*(n-1)<<"\n";
	}
	return 0;
}