 // Iterative / optimized binary search approach
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
   // time complexity -->
// best case - O(N)  ,The target element is located exactly at the middle index during the very first comparison.
// average case - O(log N)
//  worst case - O(log N)
   // space complexity --> O(1)



                         //using recursive binary search

   int recbinarysearch(int arr[] , int tar ,int start ,int end){
    if(start<=end){
        int mid = start + (end - start)/2 ;
        if( arr[mid]>tar){
            return recbinarysearch(arr , tar ,start , mid - 1);
        }
        else if(arr[mid]<tar){
            return recbinarysearch(arr ,tar , mid+1 , end);
        }
        else{  // int [mid] == target
            return mid;
        }

    }
    return -1;  // s > e and nothing return means target was not found

   }
   int main() {

	int arr[] = {10, 20, 30, 40, 50, 60, 70};
	int t = 70;

	cout << recbinarysearch(arr, t ,0,6) << endl;

	return 0;
} 

  // time complexity --> O(log N)
  // space complexity --> O(log N)