#include <iostream>
using namespace std;

int LCM(int n1, int n2)
{
	int greater, lcm;

	// find greater number
	if ( n1 > n2 ) greater = n1;
	else greater = n2;

	// use while loop 
	int i = greater;
	bool found = false;
	while (! found) {
		if (i % n1 == 0 && i % n2 == 0) {
			lcm = i;
			found = true;
		} else i++;
	}
	return lcm;
}

int main()
{
	int a, b;
	cout << "Enter 2 integer number: ";
	cin >> a >> b;
	
	cout << "The Least Common Multiple of " << a << " and " << b << ": " << LCM(a, b) << endl;
	return 0;
}
