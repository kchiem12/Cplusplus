#include <iostream>
#define MY_NAME "kenneth bone"  //using pre-processor directive

using namespace std;

int add(int x, int y);

int main() {
	cout << "Input 2 numbers: ";
	int x = 0; 
	int y = 0;
	cin >> x >> y;

	cout << "The sum is " << x + y << "\n";
	cout << MY_NAME << "\n";
	#ifdef MY_NAME
	cout << "Heyo" << "\n";
	#endif

	//can use #if 0 to block code from being executed


	return 0;
}

/*
	someFunction(a(), b()) can be problematic since b() could execute first or second

	if order matters, then make variables that store the functions value
	ex.

	int avar = a();
	int bvar = b();
	someFunction(avar, bvar)

	- can use a forward declaration if function is defined after the main function
	ex. int add(int x, int y); <-- forward declaration
*/