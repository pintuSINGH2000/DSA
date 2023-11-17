// You are given an array a1,a2,…,an. You need to find an array b1,b2,…,bn consisting of numbers 1, 2, 3
// such that exactly two out of the following three conditions are satisfied:

// There exist indices 1≤i,j≤n such that ai=aj, bi=1, bj=2.
// There exist indices 1≤i,j≤n such that ai=aj, bi=1, bj=3.
// There exist indices 1≤i,j≤n such that ai=aj, bi=2, bj=3.
// If such an array does not exist, you should report it.

//here for initial case all number be one
//after when number repeat we can replace with that only once either with 2 or 3 so that third condition always false.
//if we successfully set 2 && 3 in array then we found array else print -1;


include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_map<int,int> mp;
    vector<int> ans(n,1);
    bool twoOne=false,threeOne=false;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
        if(mp[a[i]]==2){
            if(!twoOne){
                ans[i]=2;
                twoOne=true;
            }else if(!threeOne){
                ans[i]=3;
                threeOne=true;
            }
        }
    }
    if(!threeOne) {
        cout<<-1<<endl;
        return;
    }
    
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
signed main () {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;
	cin >> t;
	
	for (int tc = 1; tc <= t; tc++) {
		solve();
	}
}