#include <iostream>
using namespace std;

void Amstrongs_number(int num)
{
	int n = num;
	int sum = 0;
	int a;
	
	while (n > 0) {
		a = n % 10;
		sum += (a*a*a);

		n /= 10;
	}
	if (num != sum) cout << "No amstrongs";
	else cout << "amstrongs";
}

int main()
{
	int number;
	cout << "Nhap so nguyen n: ";
	cin >> number;

	Amstrongs_number(number);
	
	return 0;
}
