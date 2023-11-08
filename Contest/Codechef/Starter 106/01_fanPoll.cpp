// Problem
// Chef Sports conducted a fan poll to find out who their fans thought was the best captain.
// The three players nominated were Dhoni, Rohit, and Kohli. They received A,B, and C votes, respectively.

// Find out whether Dhoni won the poll, i.e, if he received the maximum number of votes.

// Note: It is guaranteed that no two players received the same number of votes.

//intitution
//check if a is maximum

#include <iostream>
using namespace std;

int main() {
    int a,b,c;
	cin>>a>>b>>c;
	if(a>b){
	    if(a>c){
	        cout<<"Yes";
	    }else{
	        cout<<"No";
	    }
	}else{
	    cout<<"No";
	}
	cout<<"\n";
}