#include <iostream>
using namespace std;

int main() {
	
	int item;
	int lenght = 5;
	int position;
	int i;
	
	int arr[] = {34, 76, 98, 23, 21};
	
	cout << "All elements in the array " << endl;
	
	for(i = 0; i < lenght; i++){
		cout << arr[i] << endl;
	}	
	
	cout << "Enter item position to delete" << endl;
	cin >> position;
	
	for(i = position; i < lenght; i++){
		arr[i - 1] = arr[i];
	}
	lenght--;
	
	cout << "All item after deletion " << endl;
	
	for(i = 0; i < lenght; i++){
		cout << arr[i] << endl;
	} 
	
	return 0;
}
