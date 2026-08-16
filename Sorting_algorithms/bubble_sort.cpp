             //Bubble Sort is the simplest comparison-based sorting algorithm. It works by repeatedly stepping through a list, 
// comparing adjacent items, and swapping them if they are in the wrong order. This process repeats until the entire list is 
//completely sorted. The name comes from how larger elements "bubble" up to the end of the collection with each pass.

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,34,567,23,0,45};
    int n =6;
    for(int i=1; i<=n-1; i++){
        bool flag =false; 
        for(int j=0; j<n-i; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag = true;
        }
    }
    if(flag==false){   // this flag is used to check if any swap happened or not,  if no swap happen that meand array is sorted now so no need to run further loop
        break;
    }
}
   for(int num : arr){
        cout<<num<<" ";
    }

}

     // Best Time Complexity  is O(n) --> Occurs when the input array is already sorted.
     // average time complexity is lie between n and n² --> occurs when array is partially sorted .
     // Worst Time Complexity i O(n²)  --> Occurs when the array is sorted in reverse .
     // Space Complexity is O(1)