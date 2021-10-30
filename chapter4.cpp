#import <iostream>
#import <bitset>      //for use of binary!!
#import <iomanip>     //allows for setprecision()
#import <cstdint>     //allows for fixed width for integers

using namespace std;

int main() {

	//use constexp for values that should remain constant since compile time
	//use const for values that cannot be changed after being initalized

	
	cout << "The size of int is:\t" << sizeof(int) << "\n";


	int8_t test = 20; 				//range is -128 to 127

	int_fast8_t o1 = 20;             //fast favors performance
	int_least8_t o2 = 20; 			  //least favors memory conservatiob (takes least size)

	//floating points values help store very large numbers (such as those that require scientific notation)
	//ex
	float value = 5.0f;	   //holds least (and least precise!)
	double stuff = 5.9;	   //holds second most
	long double great;     //holds the most

	cout << setprecision(16); //sets precision to 16 digits
	cout << 3.333333333333333333f << "\n";
	cout << 3.333333333333333333 << "\n";  //double will be more precise than float

	//!! BE WARY OF ROUNDING ERRORS !!

	//dividing by 0 results in either positive or negative infinity
	//dividing 0 by 0 results in NaN (not a number)



	//BOOLEAN!!

	bool b = true;

	cout << b << "\n"; //printing bools will either result in 1 or 0
	cout << boolalpha; //will now print true or false
	cout << b << "\n";

	//for inputting boolean values, it only accepts 1 or 0




	//if statements work just like they do in any other language
	if (b == true)
		cout << "HEYO THIS IS TRUE" << "\n";
	else
		cout << "this will never print" << "\n";



	//chars!
	char c = 'a';

	//can cast char into int
	int char_int(c);
	//or can use static_cast<type>(var)
	cout << static_cast<int>(c) << "\n";

	//LITERALS (chart of suffixes for literals) 
	//refer to chapter 4.12 for list of literals including octo and binary
	double avagadro = 6.02e23; //double literal

	unsigned int bruh = 200;       //unsigned integers can only hold non-negative values
	return 0;
}