// A mother bought a set of N toys for her 2 kids, Alice and Bob. She has already decided which toy goes to whom,
// however she has forgotten the monetary values of the toys.
// She only remembers that she ordered the toys in ascending order of their value. The prices are always non-negative.

// A distribution is said to be fair when no matter what the actual values were,
// the difference between the values of the toys Alice got, and the toys Bob got, does not exceed the maximum value of any toy.

// Formally, let v i be the value of i-th toy, and S be a binary string such that =Si =1 
// if the toy is to be given to Alice, and Si=0 if the toy is to be given to Bob.
// Then, the distribution represented by S is said to be fair if, for all possible arrays v satisfying 0<=v1<=v2<v3....<=vn.

// |∑_{i=1}^{N} v_i ⋅ [s_i = 1] - ∑_{i=1}^{N} v_i ⋅ [s_i = 0]| ≤ v_N
 
// where [P] is if P is true, and 0 otherwise.

// You are given the binary string S representing the distribution.
// Print YES if the given distribution is fair, and NO otherwise.

//solution
// no adjacent digit are equal
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>> t;
	while(t>0){
	    t--;
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int alice =0;
	    bool flag=true;
	    for(int i=n-1;i>=0;i--){
	        if(s[i]=='0'){
	            alice++;
	        }else{
	            alice--;
	        }
	        if (alice < -1 || alice > 1) {
                flag = false;
                cout << "NO" << "\n";
                break;
            }
	    }
	    if(flag){
	        cout<<"YES"<<"\n";
	    }
	}
	return 0;
}
