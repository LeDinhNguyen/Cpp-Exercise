#include <iostream>
using namespace std;

double Factorial(int n)
{
	double result = 1;

	if ( n == 0 ) return 1;
	else {
		for (int i = 1; i <= n; i++) {
			result = result * i;
		}

		return 1 / result;
	}
}

double Neper(int n) {
	double result = 0;
	
	if ( n == 0 ) return 1;
	else {
		for (int i = 0; i <= n; i++) {
			result = result + Factorial(n);
		}

		return result;
	}
}

int main()
{
	int n;
	cout << "Nhap so nguyen n: ";
	cin >> n;
	cout << Factorial(n) << endl;
	cout << Neper(n) << endl;
	return 0;
}
