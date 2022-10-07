/*
With the C++ rand() method, you can return a positive number within the range from 0.0 to RAND_MAX

To make a different sequence of numbers, we should specify a seed as an argument to a srand() function.

To make a different sequence of numbers, we should specify a seed as an argument to a srand() function.

The best solution is to seed the rand(0 function using the current time as the argument to srand(), by calling time() function from the standard C++ library, <ctime>

 */
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	//display the value of RAND_MAX	
	cout << "RAND_MAX=" << RAND_MAX << endl;

	//use modulus operator to specify maxim value

	//we will print five random numbers like dice rolls
	//produces the same numbers each time it is run
	cout << "using rand() \n";
	for (int i = 1; i <= 6; i++) {
		cout << (rand() % 6) + 1 << endl;
	}

	//this will give us a different sequence each time

	cout << "seeding the rand() function\n";
	srand((int)time(0));
	for (int i = 1; i <= 6; i++) {
		cout << (rand() % 6) + 1 << endl;
	}
	return 0;
}