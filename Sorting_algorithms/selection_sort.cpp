        // Selection Sort is a comparison-based sorting algorithm. It works by dividing the array
// into two parts: a sorted portion and an unsorted portion. In each pass, it finds the
// smallest element from the unsorted portion and swaps it with the first element of
// that unsorted portion. This process continues until the entire array is sorted.
//
// The important idea is:
// Find the minimum element -> swap it with the current element -> move to the next position.

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,3,1,5,4,0,9};
    int n=8;                                     // for perfect code understanding you can see CB_DSAcode file
    for(int i=0;i<n-1;i++){
        int minIdx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
    for( int num : arr){
        cout<<num<<" ";
    }

    
}


 // Best Time Complexity is O(n²) --> Even if the array is already sorted, Selection Sort
// still searches the remaining unsorted portion to find the minimum element.
//
// Average Time Complexity is O(n²) --> Occurs for a randomly/partially arranged array.
//
// Worst Time Complexity is O(n²) --> Occurs when the array is sorted in reverse order.
//
// Space Complexity is O(1) --> Selection Sort sorts the array in-place and uses only
// a constant amount of extra space.
//
// Note: Selection Sort performs at most O(n) swaps, which is fewer swaps than Bubble Sort.