#include "/Users/kenchiem/Desktop/cpp/stdc++.h"
//#include <bitset>    for bitset<>

/*
	BIT MANIPULATION!!

	refer to O.2 for list of operators 
	^-- use columns


	can use bitmasks!! 

	to query bit states: if (flags & option4)  <-- if option4 is set, do something
	to set bits on: flags |= option4   <-- turns option 4 on
	to turn off bits: flags &= ~option4 <-- turns off option 4
	to flip bit states: flags ^= option4  <-- flips option 4 from on to off

	O.4 lists about converting binary numbers and two complements
*/

using namespace std;

int main() {

	bitset<8> mybitset = 0b00000101; //8 bits in size for 8 flags   <-- unsigned integer binary!!

	/*
		biset methods:

		bits.test() <-- checks if 1 or 0
		bits.set()  <-- sets a bit at a certain position to 1
		bits.reset() <-- sets a bit at a certain position to 0
		bits.flip() <-- flips a bit from 0 to 1 or 1 to 0
	*/

	return 0;
}