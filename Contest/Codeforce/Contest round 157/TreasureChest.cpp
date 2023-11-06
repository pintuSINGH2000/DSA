// Monocarp has found a treasure map. The map represents the treasure location as an OX axis. Monocarp is at 0,
// the treasure chest is at x,
// the key to the chest is at y.

// Obviously, Monocarp wants to open the chest. He can perform the following actions:

// go 1 to the left or 1 to the right (spending 1 second);
// pick the key or the chest up if he is in the same point as that object (spending 0 seconds);
// put the chest down in his current point (spending 0 seconds);
// open the chest if he's in the same point as the chest and has picked the key up (spending 0 seconds).
// Monocarp can carry the chest, but the chest is pretty heavy. He knows that he can carry it for at most k
//  seconds in total (putting it down and picking it back up doesn't reset his stamina).

// What's the smallest time required for Monocarp to open the chest?

// 3
// 5 7 2
// 10 5 0
// 5 8 2

// 7
// 10
// 9

// intitution
// if he move to x and inbetween if he find key(y) so distance is x;
// if if he move to x then y and y-x<=k then return x+(y-x).
// else if have to covered x distance than y distance then double amount of distance to get key because he can't carray chest 
// so he have to return it after collecting key so 2*(y-x-k)


#include <bits/stdc++.h>
using namespace std;
  
int main () {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t = 1;
	cin >> t;
	
	for (int tc = 1; tc <= t; tc++) {
		solve();
	}
	return 0;
}

//
void TreasureChest () {
	
	int x,y,k;
	cin>> x>>y>>k;
	if(y<x) cout<<x;
	else if(y-x<=k){
	    cout<<x+(y-x);
	}else{
	    int distance=(y-x);
	    int remaining=distance-k;
	    cout<<x+(k)+2*(remaining);
   }
   cout<<"\n";
}
