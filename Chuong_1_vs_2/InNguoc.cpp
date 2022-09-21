#include <iostream>
using namespace std;

void InNguoc(int n)
{
	int digit;
	bool found = false;
	while (! found) {
		if ( n < 10 ) found = true;
		cout << n % 10 << " ";
		n /= 10;
	}
}

void InNguocDeQui(int n)
{
	if ( n != 0 ) {
		cout << n % 10 << " "; 
		n /= 10;
		InNguocDeQui(n);
	}
}

int main()
{
	InNguoc(123);
	cout << endl;
	InNguocDeQui(123);
	return 0;
}
