#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {

	int s = 0;  //start 
	int e = n - 1; //end

	while (s <= e) {

		// int m = (s + e) / 2;  // this is correct but for some worst cases it will crash meand s and e are basically integer value and
	// let say at some point both s and e has int_max value or sum of both exceed INT_MAX then it will overflow and give wrong answer
		int mid = s + (e - s) / 2; 
	    if (target > arr[mid]) {
			// search for the target to the right
			// of the midPoint i.e. search space reduces from [s, e] to [m+1, e]
			s = mid + 1;
		} else if (target < arr[mid]){
			// search for the target to the left
			//  of the midPoint i.e. search space reduces from [s, e] to [s, m-1]
			e = mid - 1;
		}
		else{
			// arr[m] = target
			return mid;
		}
	}

	// s > e and nothing return means target was not found
	return -1;
}

int main() {

	int arr[] = {10, 20, 30, 40, 50, 60, 70};
	int n = sizeof(arr) / sizeof(int);

	int t = 60;

	cout << binarySearch(arr, n, t) << endl;

	return 0;
}


