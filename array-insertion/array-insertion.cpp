#include <iostream>
using namespace std;

int main() {
	
	int item;
	int lenght = 5;
	
	int arr[] = {1, 5, 8, 9, 3};
	
	cout << "Elements present in array " << endl;
	
	for(int i = 0; i < lenght; i++) {
		cout << arr[i] << endl;
	}
	
	cout << "Enter a element at the end of the array " << endl;
	cin >> item;
	
	arr[lenght] = item;
	
	cout << "Elements in array after insertion" << endl;
	
	for(int i = 0; i < lenght + 1; i++) {
		cout << arr[i] << endl;
	}
	
	return 0;	
}
