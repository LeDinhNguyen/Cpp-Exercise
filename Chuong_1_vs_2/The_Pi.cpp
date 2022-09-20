#include <iostream>
#include <cmath>
using namespace std;

double Pi_number(int n)
{
	double result;
	for ( int i = 0; i <= n; i++ ) {
		result = result + ( (pow(-1, i) * 4) / ( 2 * i + 1 ) );
	}
	return result;
}

int main()
{
	cout << Pi_number(100);
	return 0;
}
