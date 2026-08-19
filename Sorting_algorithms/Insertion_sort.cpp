     // Insertion Sort is a comparison-based sorting algorithm that builds the sorted array
// one element at a time.
//
// Insertion Sort works like sorting playing cards in your hand.
// Suppose you are holding cards:
// 1 4 3 5 2
//
// We consider the first element as already sorted:
// 1 | 4 3 5 2
// ↑
// Sorted portion
//
// Then we take the next element (current element) and insert it into its correct
// position in the sorted portion.
//
// Step 1:
// 1 | 4 3 5 2
// Take 4 as the current element.
// 4 is already greater than 1, so:
// 1 4 | 3 5 2
//
// Step 2:
// Take 3 as the current element:
// 1 4 | 3
//
// 3 is smaller than 4, so shift 4 one position to the right:
// 1 4 4
//
// Then insert 3:
// 1 3 4 | 5 2
//
// Step 3:
// Take 5 as the current element:
// 1 3 4 | 5 2
// 5 is already greater than 4, so no shifting is required:
// 1 3 4 5 | 2
//
// Step 4:
// Take 2 as the current element:
// 1 3 4 5 | 2
//
// Compare 2 with the elements before it and shift all larger elements to the right:
// 1 3 4 5 5
// 1 3 4 4 5
// 1 3 3 4 5
// 1 2 3 4 5
//
// Finally, the entire array is sorted.
//
// Important:
// The current element starts from the SECOND element (i = 1), because the first
// element is already considered sorted.
// The i pointer moves FORWARD through the array, while the prev pointer moves
// BACKWARD through the sorted portion to find the correct position.
//
// The important idea is:
// Take the current element -> compare it with previous elements -> shift larger
// elements to the right -> insert the current element at its correct position.


#include<iostream>
using namespace std;
void insertion(int arr[], int n){
    for(int i=1;i<n;i++){
        int current = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>current){             // for perfect code understanding you can see CB_DSAcode file
            arr[prev+1]=arr[prev];                        // for better understanding by dry run check the notes of lecture 11 (stared tab)   
            prev--;
        }
        arr[prev+1]=current;
    }
}
 //or by for loop in both
 void insertion_for(int arr[], int n){
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j;
        for( j = i-1; j>=0 && arr[j]>current ; j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=current;
    }
 }

int main(){
    int num[]={1,4,3,1,5,0};
    int n=6; 
    //   insertion(num,n);
     insertion_for(num,n);
    for(int a : num){
        cout<<a<<" ";
    }
}

// Best Time Complexity is O(n) --> When the array is already sorted. Each element
// only needs to be compared once and no shifting is required.
//
// Average Time Complexity is O(n²) --> Occurs when the array is randomly or
// partially arranged.
//
// Worst Time Complexity is O(n²) --> Occurs when the array is sorted in reverse
// order, because every new element needs to be shifted through the sorted portion.
//
// Space Complexity is O(1) --> Insertion Sort works in-place and uses only a
// constant amount of extra space.
//
// Note: Insertion Sort is efficient for small or nearly sorted arrays.
// It is also a stable sorting algorithm, meaning equal elements maintain
// their relative order.


       //The easiest way to remember the difference is:

//Bubble = swap neighbors
//Selection = find minimum, then swap
//Insertion = pick an element, then insert it into the sorted part
