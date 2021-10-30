#include <iostream>

/*
	good practice to keep nesting to a maximum of level 3

	can create nested namespaces

	no linkage between local variables
	***create local variables in most limited scope***

	avoid variable shadowing (when using a variable with the same name in a nested block)

	ex.
	int sutff = 0;

	int bruh() {
		int stuff = 1;
	}


	for global variables, can put them all under a header file and namespace for good use


	CAN USE INLINE FOR MULTIPLE DEFINITIONS OF VARIABLES (in header files such as 'constants')
	^-- refer to end of 6.8


	CAN BE A STATIC LOCAL VARIABLE!!
	ex.
	static int stuff = 0;

	^-- it will only be initialized once, and this does not get destroyed until end of program
	^^-- not recommended to use however
*/

using namespace std;

const int g_somenum = 0;    //global variable!!!

static int sumthin = 88;    //internal linkage (static makes it accessible to single file)

//can also make static functions that can only be accessed in main file

//functions have external linkage by default (can be used across different files)

const int soo = 6; //to access this variable in a different variable, use a forward declaration
// ex: extern int soo;

namespace foo {
	int bruhMoment(int x, int y) {
		return x + y;
	}
}
		//create user-defined namespace to reduce ambiguity!!
namespace boo {
	int bruhMoment(int x, int y) {
		return x - y;
	}
}

int bruhMoment(int x, int y) {	//in global namespace
	return x*y;
}

auto add(int x, int y) -> int { //auto can also be used this way
	return x+y;
}


//can use typeid(expression).name() to determine the type that the expression evaluates to
//ex. typeid(2+3).name() would return int

//for casting variables into different types, there are two ways:
//c-style casting: double foo = (double)(x+y);
//static_cast:  static_cast<double>(x+y);

//anonymous namespaces are namespace without names
//can use inline to prioritize a namespace
//ex: inline namespace {...}


int main() {

	typedef double meters;    //typedef creates an alias for a certain type
	meters bruh = 0;          //for example, meters can be used as a variable type
	using namespace some_metric = double; //can also use this (type alias) in replacement of typedef

	auto bruh_moment = 5.0; //auto infers the variable type from the literal assigned (example, this creates a double)


	namespace boo = foo;  //creates a reference!!

	cout << boo::bruhMoment(6, 5) << "\n";  //accessing a certain namespace
	cout << ::bruhMoment(6, 5) << "\n";     //accessing global namespace
	return 0;
}