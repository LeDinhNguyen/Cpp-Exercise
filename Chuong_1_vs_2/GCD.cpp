#include <iostream>
using namespace std;

int GCD_recursion(int a, int b)
{
	int hcf;
	
	if ( a == 0 ) hcf = b;
	else if ( b == 0 ) hcf = a;
	else hcf = GCD_recursion(b, a % b);
	return hcf;
}

int GCD(int a, int b)
{
	int smaller, hcf;

	// find smaller number => because gcd is between 1 and the smaller
	if ( a < b ) smaller = a;
	else smaller = b;

	// find gcd by for loop
	for (int i = 1; i <= smaller; i++) {
		if ( a % i == 0 && b % i == 0 ) hcf = i;
	}
	return hcf;
}

int main()
{
	int a, b;

	cout << "Enter two integer number a and b: ";
	cin >> a >> b;
	cout << "The Greatest Common Divisor of "<< a << " and " << b << ": " << GCD(a, b) << endl;
	cout << "The Greatest Common Divisor of "<< a << " and " << b << ": " << GCD_recursion(a, b) << endl;
	return 0;
}
