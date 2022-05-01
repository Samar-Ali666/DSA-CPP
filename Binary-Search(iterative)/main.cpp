#include <iostream>

using namespace std;

int binarySearch(int arr[], int begining, int end, int item) {
	
	while(begining <= end) {
		
		int mid = begining + (end - begining) / 2;
		
		if(arr[mid] == item) {
			return mid;
		}
		
		if(arr[mid] < item) {
			begining = mid + 1;	
		} else {
			end = mid - 1;
		}
	}
	
	return -1;
}

int main(){
	
	int arr[] = {2, 4, 6, 8, 10, 12};
	
	int item = 10;
	int size = sizeof(arr) / sizeof(arr[0]);
	
	int result = binarySearch(arr, 0, size - 1, item);
	
	if(result == -1){
		cout << "Element not found in the array" << endl;
	} else {
		cout << "Element found at index " << result << endl;
	}
	
	return 0;
}
