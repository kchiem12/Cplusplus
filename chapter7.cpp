#include <bits/stdc++.h>
//#include <cmath>

using namespace std;

/*
	usually good practice to block everything in if statements
	even if they are only one line long

	use the 0, 1, 2 test for loops

	use static_assert() for compile time check (if assert fails, then program terminates)

*/

int main() {

	int x = 4;
	int y = 10;

	assert(y > x && "x must be less than y!!");    //<-- if condition is not met, then program terminates

	//switch statements are like if-else statements
	//REMEMBER TO ALWAYS INCLUDE A BREAK OR A RETURN AT THE END OF EACH CASE
	//^-- without a return or break, this would cause a fallthrough in which all the cases underneath it would be executed
	//prefer this over if-else if possible

	switch (x+y) {
		case 11: 
			cout << "bruh moment" << "\n";
			break;
		case 14:
			cout << "won't execute" << "\n";
			[[fallthrough]];				//can use this to comment an intentional fallthrough
		default:
			cout << "hahaha" << "\n";
			break;
	}

	//can use blocks within cases ex. case x: {...}

	//can have multiple cases refer to one statement
	/*
		ex.
		case 1:
		case 2:
			return true;
	*/	

	//goto statements and statement label (usually avoid this)

	int h;
tryAgain:	//statement label
	cout << "Enter a non-negative number: ";
	cin >> h;

	if (h < 0)
		goto tryAgain;	//goto statement 


	//another alternative to while loops (do-while)
	/*
	
	do {
		stuff;
	}
	while (condition);

	*/

	//in for loops, multiple incrementers/decrementers can be added using commas

	//continue; skips the content of a loop without exiting it (unlike a break statement)


	//can also call atexit(function_name) <-- calls a function that requires no parameter and reuturns nothing after exit

	//can also call abort(), which terminates program abnormally
	//not recommended to use halt methods since it does not properly clear local variables


	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n')  will clear any extraneous input
	/*
		if (std::cin.fail()) {
			std::cin.clear();   <-- puts us in normal operation mode
			std::cin.ignore(std::numeric_limits<std::streamsize>.max(), '\n') <-- removes bad input
		}
	*/

	exit(0);   //halts programs at this line and returns 0



	return 0;
}