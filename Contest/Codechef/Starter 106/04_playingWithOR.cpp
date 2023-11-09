// Problem
// You are given an array A containing N integers, and an integer K (1≤K≤N).
// Find the number of subarrays of A with length K whose bitwise OR is odd.

// bruteforce calculate all sub array of equal k and check it contains odd number 
//if arr having odd number than bitwise OR of array is odd
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int j=0;j<t;j++){
	    int n,k;
	    cin >> n>>k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
     int count=0;
     for(int i=0;i<(n-k)+1;i++){
         for(int l=i;l<i+k;l++){
             if(arr[l]%2==1){
                 count++;
                 break;
             }
         }
     }
     cout<<count<<"\n";
	}
	return 0;
}
TC(N*K)
SC(1)