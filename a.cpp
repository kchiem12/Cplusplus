#include <bits/stdc++.h>
using namespace std;

//#define ll long long

void sol(int a, int arr[]) {
	int mid = (a-1)/2;
	int morePos = 0;    //counter for situations where there are positives no matter what
	for (int i = 1; i <= mid; ++i) {
		if (arr[i] - arr[i-1] > 0 && (0-arr[i]) - arr[i-1] > 0) 
			morePos++;
		if (exception )
		if (arr[i] - arr[i-1] > 0) {
			arr[i] = 0 - arr[i];
		}
	}
	for (int i = mid+1; i <= (a-1); ++i) {
		if (arr[i] - arr[i-1] < 0) {
			arr[i] = abs(arr[i]);
		}
	}
	for (int i = 0; i < a; ++i) {
		if (i == a-1) {
			cout << arr[i] << "\n";
		}
		else {
		cout << arr[i] << " ";
	}
	}


}

int main() {
	int t, a;
	int arr[100];
	cin >> t;
	while(t--) {
		cin >> a;
		for (int i = 0; i < a; ++i) cin >> arr[i];
		sol(a, arr);
	}


	return 0;
}

//split up vector in half
//make pivot the middle number
//first vector should have all a(i+1) - a(i) be negative or 0
//second vector should have all a(i+1) - a(i) be positive or 0
//to split, maybe use two for loops

//create two variables (one for situations where only positive outcome and one for negative)
//use a for loop for those two variables
//then use two loops as stated before with taking into account of the two variables
