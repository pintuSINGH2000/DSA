// Problem
// You are given a binary string S of length N.

// You can perform the following operation on it:

// Choose an index i (1≤i<N) such that S(i)=S(i+1) and flip both S(i) and S(i+1).
// Flipping S(i) means it becomes 1 if it was originally 0, and vice versa.
// For example, if S=0101100, performing the operation with 
// i=4 would result in S=0100000 and performing it with i=6 would result in S=0101111 .

// By performing this operation several (possibly, zero) times,
// is it possible to make S contain only a single type of character (that is, S should contain either all zeros or all ones)?

#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    long long int n;
	    string s;
	    cin>>n;
	    cin>>s;
        stack<char> st;
        for(auto ch:s){
            if(!st.empty()&&st.top()==ch){
                st.pop();
            }else{
                st.push(ch);
            }
        }

        if (st.size()<=1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
	    t--;
    }
	    
	
	return 0;
}

TC(n)
SC(n)