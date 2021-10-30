#include <bits/stdc++.h>
using namespace std;

/*
	can search up documentation (ex. use cppreference.com)

	end of chapter 8 explains random number generators
*/

//enumerated types are user-defined types!!
enum Color {

	//all possible types that enumerator can hold
	//by default, enumerator types are assigned int values and increase by one for each one down
	color_black,
	color_white,
	color_red,
	color_green
}; //remember to end enumerator with semi-colon



Color paint = color_black;

//for input, cin defaults to integer values for enumerated types
//one workaround is to static_cast the integer input into the enumerated type
//ex. auto color = static_cast<Color>(input);

//for more strongly typed (can use in situations when comparing different enumerated types)

enum class Fruit {
	apple,
	pear
};

enum class Person {	//usually better to use enum class as opposed to just enum
	Josh,
	Hawley
};

Person person = Josh;
Fruit fruit = apple;
if (person == fruit);   //will result in compile time error since comparing variables of different types

//for grouping multiple individual data types together, use struct!
struct Employee {
	int id;
	int age;
	double wage;
};

Employee joe;
joe.id = 15;

//can also initialize structures!
Employee harries{15, 26, 199};


int main() {

	//for std::string functions, check out the reference page
	//can use string.length() to check out length of strings

	return 0;
}

