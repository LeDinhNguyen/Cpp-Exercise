#include <iostream>
#include <cmath>
using namespace std;

bool IsPrimeInteger(int n)
{
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

void ListOfPrimeNumber(int n) 
{
	if (n <= 1) cout << "There is no prime number!!";
	for (int i = 2; i <= n; i++) {
		if (IsPrimeInteger(i)) cout << i << " ";
	}
}

int main() {
    int number;
	
	cout << "Enter a integer: ";
	cin >> number;

    if (IsPrimeInteger(number)) cout << "It is a prime number!!!" << endl;
    else cout << "It is not a prime number!!!" << endl; 

	cout << "List of prime number lower than " << number << ": "; 
	ListOfPrimeNumber(number);
    return 0;
}
