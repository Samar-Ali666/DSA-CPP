#include <iostream>
using namespace std;

int main() {
	
	int item;
	int position;
	int lenght = 5;
	int i;
	
	int arr[] = {1, 7, 3, 8, 9};
	
	cout << "Elements in the array " << endl;
	
	for(i = 0; i < lenght; i++) {
		cout << arr[i] << endl;
	}
	
	cout << "Enter element to store = ";
	cin >> item;
	
	cout << "Enter position to store = ";
	cin >> position;
	
	for(i = lenght; i >= position; i--) {
		arr[i] = arr[i - 1];
	}
	arr[i] = item;
	
	cout << "All items after insertion " << endl;
	
	for(i = 0; i < lenght + 1; i++) {
		cout << arr[i] << endl;
	}
	
	return 0;
}
