#include <iostream>

using namespace std;

int linearSearch(int arr[], int lenght, int item) {
	
	for(int i = 0; i < lenght; i++) {
		
		if(arr[i] == item) {
			return i;
		}
	}
	return -1;
}

int main() {
	
	int arr[] = {45, 43, 87, 56, 95};
	
	int item;
	int lenght = sizeof(arr) / sizeof(arr[0]);
	
	cout << "Enter item to find = ";
	cin >> item;
	
	int result = linearSearch(arr, lenght, item);
	
	if(result == -1) {
		cout << "Element not found in the array" << endl;
	} else {
		cout << "Element found at index " << result << endl;
	}
	
	return 0;
}
