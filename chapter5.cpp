#include <iostream>
#import <cmath>			//allows for exponentiation and abs()
#import <algorithm>		//allows for max()

//refer to 5.1 for chart of operator precedence
//moral of chapter, best practice to use parenthesis to remove ambiguity of precedence

using namespace std;

int main() {

	int z = pow(3, 4) //3 to the power of 4 (exp must be non-negative)

	int g = ++z;      //increments z first then assigns g to the new value <-- use prefix more

	cout << (++z, ++g) << "\n"; //comma operator goes from left to right, then returns the right value


	if (z > g) 
		cout << "Suh dude\n";
	else
		cout << "Bruh moment\n";

	(z > g) ? cout << "Suh dude\n" : "Bruh moment\n"; //does the same thing as above if statement

	//the ? operator takes three operands
	//the left side must be a condition, then afterwards, if the condition
	//is met, execute the code to the left of colon
	//otherwise, execute code to the right of the colon

	//always good practice to paranthesize the ? operator

	//for the ? operator, both expressions must be of the same type (ex. string : string)

	int x, y;
	x = 4;
	y = 3;

	cout << static_cast<double>(x) / y << "\n";    //use static_cast to cast variables

	return 0;
}