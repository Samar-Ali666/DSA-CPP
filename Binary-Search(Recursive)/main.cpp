#include <iostream>

using namespace std;

int binarySearch(int arr[], int begining, int end, int item) {
	
	if(end >= begining) {
		
		int mid = begining + (end - begining) / 2;
		
		if(arr[mid] == item) {
			return mid;
		}
		
		if(arr[mid] < item) {
			return binarySearch(arr, mid + 1, end, item);
		}
		
		return binarySearch(arr, begining, mid - 1, item);
	}
	
	return -1;
}

int main() {
	
	int arr[] = {2, 4, 6, 8, 10, 12};
	
	int item;
	int size = sizeof(arr) / sizeof(arr[0]);
	
	cout << "Enter item to find = ";
	cin >> item;
	
	int result = binarySearch(arr, 0, size - 1, item);
	
	if(result == -1) {
		cout << "Item is not present in the array" << endl;
	} else {
		cout << "Item is present on index " << result << endl;
	}
	
	return 0;
}
