#include <iostream>
using namespace std;

// Way 1: Use new variable
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

// Way 2: Use +
void swap_plus(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int main()
{
	int a, b;
	
	cout << "Nhap 2 so bat ki: ";
	cin >> a >> b;

	swap_plus(&a, &b);
	cout << a << ", " << b << endl;
	return 0;
}
