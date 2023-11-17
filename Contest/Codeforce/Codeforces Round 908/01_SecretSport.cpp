// Let's consider a game in which two players, A and B, participate. This game is characterized by two positive integers, X and Y.

// The game consists of sets, and each set consists of plays. In each play, exactly one of the players,
// either A or B, wins.A set ends exactly when one of the players reaches X wins in the plays of that set.
// This player is declared the winner of the set. The players play sets until one of them reaches Y
// wins in the sets. After that, the game ends, and this player is declared the winner of the entire game.

// You have just watched a game but didn't notice who was declared the winner. You remember that during the game, n
// plays were played, and you know which player won each play. However, you do not know the values of X and Y.
// Based on the available information, determine who won the entire game — A or B.
// If there is not enough information to determine the winner, you should also report it.
// Note that we know for sure that exactly n plays were played in the game, and the game ended right after the nth game.
//  Scenarios, where the game ends earlier or later, are invalid.
// Note that a set ends as soon as somebody scores X points. The next set starts immediately after.
// The game ends as soon as somebody scores Y sets. No plays are played after that.

// intitution
//the game end when some body score y set. if then also game play then he will n0t the winner 
//so last game play winner will always winner because when last play win by some player declare winner after that and game end.

#include <iostream>
#include <algorithm>
using namespace std;
 
int solve(){
    int n;
    cin>>n;
    string s;
    cin >> s;
    cout<<s.back();
    cout<<"\n";
}
int main () {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t = 1;
	cin >> t;
	
	for (int tc = 1; tc <= t; tc++) {
		solve();
	}
	
	return 0;
}