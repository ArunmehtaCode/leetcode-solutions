// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={0,34,5,67,4};
//     int n =5;
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }

//     }
//     for(int num : arr){
//         cout<<num<<" ";
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int arr[]={0,34,5,67,4};
    int n =5;



}

// The easiest way to remember the difference is:

// Bubble = swap neighbors
// Selection = find minimum, then swap
// Insertion = pick an element, then insert it into the sorted part

// Bubble Sort repeatedly compares adjacent elements.

// Example:

// 5 3 4 1

// Compare 5 and 3 → swap:

// 3 5 4 1

// Compare 5 and 4 → swap:

// 3 4 5 1

// Compare 5 and 1 → swap:

// 3 4 1 5

// The largest element bubbles to the end after each pass.

// Main idea:
// compare neighbors → swap if wrong


// 2. Selection Sort

// Selection Sort doesn't keep swapping while searching.

// It finds the smallest element in the unsorted part and then swaps it into position.

// Example:

// 5 3 4 1

// Find minimum → 1

// 5 3 4 [1]

// Swap with first element:

// 1 3 4 5

// Now the first position is done.

// Then find the minimum from:

// 3 4 5

// and continue.

// Main idea:

// find minimum → swap once → next position



// 3. Insertion Sort

// Insertion Sort works like arranging playing cards in your hand.

// Suppose:

// 1 4 | 3 5 2

// The 1 4 portion is already sorted.

// Take 3:

// 1 4 | 3

// 3 is smaller than 4, so shift 4:

// 1 4 4

// Insert 3:

// 1 3 4 | 5 2

// Then take 5, then 2, and insert each into the correct position.

// Main idea:

// take current element → shift larger elements → insert




// SELECTION
// "Who is the smallest?"
// → Search entire unsorted part
// → Find minimum
// → Swap it to the front




// INSERTION
// "Where does this element belong?"
// → Pick current element
// → Move larger elements right
// → Insert current element
// And this is important for DSA

// All three are O(n²) average/worst-case, so they're not what you'd normally choose for large data.

// But learning them is important because they teach three different fundamental techniques: