#include <iostream>
using namespace std;

bool Check_leap_year(int year) 
{
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) return true;
	else return false;
}

int main()
{
	int year;
	cout << "Nhap so nguyen n: ";
	cin >> year;

	cout << Check_leap_year(year);
	return 0;
}
