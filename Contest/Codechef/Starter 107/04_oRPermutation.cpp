// Problem
// Given an integer N, find a permutation of size N such that:
// Aith != A(i-1)th | A(i-2)th
// for all 3≤i≤N, where ∣ denotes the bitwise or operation.
// It is guaranteed that such permutation always exists. If multiple such permutations exist, you may print any.
// Note that a permutation of size N consists of all integers from 1 to N exactly once.

//print greater number first as Or of small number cannot be equal to greater number

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    int n;
	    cin>>n;
	    for(int i=n;i>=1;i--){
	        cout<<i<<" ";
	    }
	    cout<<"\n";
	    t--;
	}
	return 0;
}