You are hosting a chess tournament with 2N people. Exactly X of them are rated players, and the remaining 
2N−X are unrated players.

Your job is to distribute the players into N pairs, where every player plays against the person paired up with them.

Since you want the rated players to have an advantage, you want to pair them with unrated players. Thus, you want to minimize
the number of rated players whose opponent is also rated.
Print the minimum number of rated players whose opponents are also rated, among all possible pairings.


#include <iostream>
using namespace std;

int chessPairing(){
    int n,x;
    cin>>n>>x;
    int unrated=n*2-x;
    int remaining=unrated-x;
    if(remaining>=0) return 0;
    return -1*remaining;
}

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	  int ans = chessPairing();
	  cout<<ans<<"\n";
	}
	return 0;
}