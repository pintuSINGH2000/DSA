// Problem
// Chef and Chefina are playing the famous game of Rock, Paper, Scissors.
// The game consists of N rounds. In each round, both players choose one of the three moves: Rock, Paper, or Scissors,
// denoted by R, P, and S respectively.

// If both players play the same move, the current round ends in a draw and neither of them gets a point.
// If one of the players plays Rock and the other plays Scissors, the player who played Rock wins the round and gets a point.
// If one of the players plays Scissors and the other plays Paper, the player who played Scissors wins the round and gets a point.
// If one of the players plays Paper and the other plays Rock, the player who played Paper wins the round and gets a point.
// The winner of the game is the player who gets the maximum number of points after playing all the rounds.
// If both players have the same number of points, then the game ends in a draw.

// You are given two strings A and B, each of length N, consisting of uppercase English letters R, P, and S,
// where Aith denotes the move made by Chef in the ith round and Bith denotes the move made by Chefina in the ith round.

// Find the minimum number of rounds Chef should have played differently to have won the game.

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    int n;
	    cin>>n;
	    string a,b;
	    cin>>a>>b;
	    int chef=0,chefina=0;
	    for(int i=0;i<n;i++){
	        if(a[i]=='R' && b[i]== 'S'){
	            chef++;
	        }
	        
	        if(a[i]=='S' && b[i]=='R'){
	            chefina++;
	        }
	         if(a[i]=='S' && b[i]== 'P'){
	            chef++;
	        }
	        
	        if(a[i]=='P' && b[i]=='S'){
	            chefina++;
	        }
	         if(a[i]=='P' && b[i]== 'R'){
	            chef++;
	        }
	        
	        if(a[i]=='R' && b[i]=='P'){
	            chefina++;
	        }
	       
	    }
	    if(chef>chefina){
	        cout<<0;
	    }else if(chef==chefina){
	        cout<<1;
	    }else{
	        int count=0;
	        while(chefina>=chef){
	            count++;
	            chef++;
	            chefina--;
	        }
	        cout<<count;
	    }
	    cout<<"\n";
	    t--;
	}
	return 0;
}
