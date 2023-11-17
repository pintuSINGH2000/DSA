//You are given an array b1,b2,…,bn.

// An anonymous informant has told you that the array b was obtained as follows: initially, there existed an array a1,a2,…,an,
// after which the following two-component operation was performed k times:

// A fixed point† x of the array a was chosen.
// Then, the array a was cyclically shifted to the left‡ exactly x times.
// As a result of k such operations, the array b1,b2,…,bn was obtained.
// You want to check if the words of the anonymous informant can be true or if they are guaranteed to be false.†
// A number x is called a fixed point of the array a1,a2,…,an if 1≤x≤n and ax=x.
// A cyclic left shift of the array a1,a2,…,an is the array a2,…,an,a1.


# include <bits/stdc++.h> 
using namespace std; 
 
void solve() { 
    long long n,k; 
    cin>>n>>k; 
    vector<long long> arr(n);
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    long long aa=n-1;
    long long ans=true;
    set<long long> s;
    for(int i=0;i<k;i++){
        if(s.count(aa)) break;
        if(arr[aa]>n){
            ans=false;
            break;
        }
        s.insert(aa);
        aa=(aa-arr[aa]+n)%n;
    }
    cout<<(ans ? "YES":"NO")<<"\n";
}
 
signed main () {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t = 1;
	cin >> t;
	
	for (int tc = 1; tc <= t; tc++) {
		solve();
	}
}