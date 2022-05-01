#include <iostream>

using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

bubbleSort(int arr[], int size) {
	
	int i, j;
	
	for(i = 0; i < size - 1; i++) {
		for(j = 0; j < size - i - 1; j++) {
			if(arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}					
		}
	}
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
	
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, size);
	cout << "Sorted Array" << endl;
	printArray(arr, size);
	
	return 0;
}
