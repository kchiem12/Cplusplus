#include <bits/stdc++.h>
using namespace std;


int main(){


	int arr[] {1, 4, 5, 10, 11}; //initializes an array of length 30
	int stuff[5]{1, 2, 3, 4, 5}; //explicity fills the array after initialization

	//std has a size function to determine the size of array
	//sizeof() usually does array length = array size / element size
	//thus, rewrite so that sizeof(array) / sizeof(array[0]) to get the array size
	cout << sizeof(arr) / sizeof(arr[0]) << "\n";

	return 0;
}