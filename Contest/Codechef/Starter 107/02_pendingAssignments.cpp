// Problem
// Chef has finally decided to complete all of his pending assignments.

// There are X assignments where each assignment takes Y minutes to complete.
// Find whether Chef would be able to complete all the assignments in Z days.

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	int x,y,z;
	cin>>x>>y>>z;
	
	if(x*y<=z*1440){
	    cout<<"YES";
	}else{
	    cout<<"NO";
	}
	cout<<"\n";
	t--;
	}
	return 0;
}