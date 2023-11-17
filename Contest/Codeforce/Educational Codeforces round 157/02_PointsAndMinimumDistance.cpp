// You are given a sequence of integers a of length 2n. You have to split these 2n integers into n pairs; each pair will represent 
// the coordinates of a point on a plane. Each number from the sequence a should become the x or y coordinate of exactly one point.
// Note that some points can be equal.
// After the points are formed, you have to choose a path s that starts from one of these points, ends at one of these points,
// and visits all n points at least once.

// The length of path s is the sum of distances between all adjacent points on the path. In this problem, 
// the distance between two points (x1,y1) and (x2,y2) is defined as |x1−x2|+|y1−y2|.

// Your task is to form n points and choose a path s in such a way that the length of path s is minimized.

// 2
// 2
// 15 1 10 5
// 3
// 10 30 20 20 30 10

// 9
// 10 1
// 15 5
// 20
// 20 20
// 10 30
// 10 30


// intitution 
// To get max distance we have to sort and make pair of small and big number because difference of adjacent give max sum
// 5-1+15-10=9 give max value


#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
 struct P{
     int x,y;
 };
 
 bool compare(const int& a,const int& b){
     return a<b;
 }
void PointsAndMinimumDistance() {
    int n;
    cin>>n;
    vector<int> arr(2*n);
    for(int i=0;i<2*n;i++) cin >>arr[i];
    sort(arr.begin(),arr.end(),compare);
    vector<P> point(n);
    int length=0;
    int left=0;
    int right=2*n-1;
    for(int i=0;i<n;i++){
        point[i].x=arr[left];
        point[i].y=arr[right];
        left++;
        right--;
        if(i>0){
            length+=abs(point[i].x-point[i-1].x)+abs(point[i].y-point[i-1].y);
        }
    }
    cout<<length<<endl;
    for(int i=0;i<n;i++){
        cout<<point[i].x<<" "<<point[i].y<<endl;
    }
}
 
int main () {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t = 1;
	cin >> t;
	
	for (int tc = 1; tc <= t; tc++) {
		PointsAndMinimumDistance();
	}
	
	return 0;
}

//other approach

//maximum distance at x-axis is max value of x minus min value of x;
//similarly distance at y-axis is max value of y minus min value of y
//1 5 10 15
// considered 1,5 at x-axis and 10 and 15 at y axis
// so 5-1+15-10=9

void PointsAndMinimumDistance() {
    int n;
    cin>>n;
    vector<int> arr(2*n);
    for(int i=0;i<2*n;i++) cin >>arr[i];
    sort(arr.begin(),arr.end());
    cout<< arr[n-1]-arr[0]+arr[2*n-1]-arr[n]<<"\n";
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<arr[i+n]<<endl;
    }
}