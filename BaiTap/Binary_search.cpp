#include <iostream>
using namespace std;

// links: https://www.programiz.com/dsa/binary-search
int Binary_search(int arr[], int x, int low, int high)
{
	if (low <= high) {
		int mid = low + (high - low)/2;
		if (arr[mid] == x) return mid;
		else if (arr[mid] > x) return Binary_search(arr, x, low, mid - 1);
		else return Binary_search(arr, x, mid + 1, high);
	}
	return -1;
}


int main()
{
	int array[] = {3, 4, 5, 6, 7, 8, 9};
	int x = 4;
	int n = sizeof(array) / sizeof(array[0]);
	int result = Binary_search(array, x, 0, n - 1);

	if (result == -1) cout << "Not found";
	else cout << "Element is found at index " << result;
	return 0;
}
