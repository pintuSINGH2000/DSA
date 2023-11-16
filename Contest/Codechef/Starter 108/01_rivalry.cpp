// Rivalry
// Dominater and Everule are very competitive, and keep trying to show that they are better at competitive programming
// than the other. What better measure is there than their rating?

// Both of them participated in a contest. Before the contest, Dominater's rating was 
// R1 and Everule's rating was R2. Dominater's rating changed by D1 in the contest, and Everule's rating changed by D2.

// Who has the higher final rating after the contest?
// Print "Dominater" if his rating is higher, and "Everule" if his rating is higher 


#include <iostream>
using namespace std;

int main() {
    int r1,r2;
    cin>>r1>>r2;
    int d1,d2;
    cin>>d1>>d2;
    r1+=d1;
    r2+=d2;
    if(r1>r2){
        cout<<"Dominater"<<"\n";
    }else{
        cout<<"Everule"<<"\n";
    }
	return 0;
}