#include <iostream>
using namespace std;

int Fibonacci_recursion(int n)
{
	if (n <= 2) return 1;
	return Fibonacci_recursion(n-1) + Fibonacci_recursion(n-2);
}

int Fibonacci(int n)
{
	int a1 = 1, a2 = 1;
	int i = 3;
	int a;
	while ( i <= n )
	{
		a = a1 + a2;
		a1 = a2;
		a2 = a;
		i++;
	}
	return a;
}

int main()
{
	// dung found de thoat khoi vong lap
	bool found = false;
	int number;
	while (! found)
	{
		cout << "Nhap so nguyen n: ";
		cin >> number;
		if (number <= 0) {
			cout << "Du lieu khong hop le " << endl;
		} else found = true; // thoat khoi vong lap

	}
	cout << Fibonacci(number) << endl;
	cout << Fibonacci_recursion(number) << endl;
	return 0;
}
