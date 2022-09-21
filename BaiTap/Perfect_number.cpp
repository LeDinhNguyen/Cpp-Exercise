#include <iostream>
using namespace std;

bool Perfect_Number(int n)
{
	int sum = 0;
	for ( int i = 1; i < n; i++ ) {
		if (n % i == 0) sum += i;
	}
	if ( sum == n ) return true;
	return false; 
}

int main()
{
	int number;

	cout << "Nhap so nguyen n: ";
	cin >> number;

	if ( Perfect_Number(number) ) cout << "So " << number << " la so hoan hao" << endl;
	else cout << "So " << number << " la so khong hoan hao";

	cout << "Cac so hoan hao la: ";
	for ( int i = 1; i < number; i++ ) {
		if (Perfect_Number(i)) cout << i << " ";
	}

	return 0;
}
