// Problem
// Chef classifies a day to be either rainy, cloudy, or clear.

// In a particular week, Chef finds X days to be rainy and Y days to be cloudy.
// Find the number of clear days in the week.

#include <iostream>
using namespace std;

int main() {
    int x,y;
	cin>>x>>y;
	cout<<7-(x+y);
	return 0;
}