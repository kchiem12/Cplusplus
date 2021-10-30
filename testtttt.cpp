#include <iostream>
using namespace std;


void Changes(int& x) {  //the & passes by reference. allows the function to change the input!
	x = x + 1;
}

int main() {

	int g = 0;
	Changes(g);

	vector<int> stuff;
	

	cout << g << '\n';

	return 0;
}