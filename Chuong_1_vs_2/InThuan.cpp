#include <iostream>
#include <cmath>
using namespace std;

// Counting digits of a number
int DigitsOfNumber(int n)
{
	int count = 0;
	bool found = false;
	while (! found) {
		if (n < 10) found = true;
		n /= 10;
		count ++;
	}
	return count;
}

// print many digit of a number
void InThuan(int n)
{
	int divider = pow(10, DigitsOfNumber(n) - 1);
	bool found = false;
	while (! found) {
		// condition for break while loop
		if ( n < 10 ) {
			found = true;
		}
		
		// the digit need to be printed is n / divider;
		cout << n / divider << " "; 

		// decrease one digit in n and number_of_digits
		n %= divider;
		divider /= 10;
	}
}

void InThuanDeQui(int n)
{
	if ( n != 0 ) {
		//
	}
}

int main()
{
	int number;

	cout << "Enter a integer: ";
	cin >> number;

	cout << DigitsOfNumber(number) << endl;
	InThuan(number);
	return 0;
}
