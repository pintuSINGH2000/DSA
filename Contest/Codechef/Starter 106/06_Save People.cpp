// Chef has a 2-D grid with N rows and M columns. The cell at the intersection of the i-th row and
// j-th column is denoted cell (i,j).
// Initially, only cell (x,y) of the grid is infected.

// Chef can select exactly one non-infected cell and vaccinate it. Then, the infection and
//  the vaccine spread across the grid, as follows:

// First, any cell that is neither vaccinated nor infected, but is adjacent (horizontally or vertically)
// to an infected cell, becomes infected itself.
// Next, any cell that is neither vaccinated nor infected, but is adjacent (horizontally or vertically)
// to a vaccinated cell, becomes vaccinated itself.

// inituation
//we have to get maximum distace of from virus top ,bottom ,left and right

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    t--;
	    long long n, m;
	    cin>>n>>m;
	    long long x,y;
	    cin>>x>>y;
	    long long ans=max((n-x)*m,max((y-1)*n,max((m-y)*n,(x-1)*m)));
	    cout<<ans<<"\n";
	}
	return 0;
}