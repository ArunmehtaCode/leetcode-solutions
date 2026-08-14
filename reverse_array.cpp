
         // What are Two Pointers?

//     Despite the name, it's not a special C++ feature.
//     Two pointers simply means using two variables to keep track of two positions in an array/string.
//       For example:
//            int left = 0;
//            int right = n - 1;

//            // Basic Two Pointer Template
                 //The most common form is:
        /*  int left = 0;
         int right = n - 1;

         while (left < right) {
           // do something
          left++;
          right--;
                     }      */



                     //This reverse array code is also a classic example of the opposite-direction two-pointer pattern

#include<iostream>
using namespace std;
int main(){
    int arr[]= {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
    while(i<j){
      int x =arr[i];
      arr[i]=arr[j];             //OR WE CAN USE SWAP FUNc.by simple swap(arr[i],arr[j]);
      arr[j]=x;
      i++;
      j--;
    }
    for(int num :arr){
      cout<<num<<endl;
    }
}
       // ONE other way to swap witout using another variable and swap function
                //is by using XOR
        //as we know a^a=0 , a^0=a , so we can do...
        //         a=a^b;   ( now a has a^b)
        //          b=a^b;  ( now b equals to (a^b)^b so b and b will cancel and gives 0 and then a^0 is a, so now b has a value)
        //          a=a^b;  ( a is still (a^b) and now it becomes (a^b)^b(which is equal to a now) means = (a^b)^a and it will gives b)


                            // OR tha bsaic one
                    //a=a+b;
                    //b=a-b;
                    //a=a-b;

        // and to find the size of array let say int arr[] = {1,3,43,5,4,64} ; ,we can use
        //int n = sizeof(arr) / sizeof(int);



             // Template 2 ( two pointers) — Sorted array + sum target
             //let say int arr = [1,3,6,21,34,56];

//  int left = 0;
// int right = nums.size() - 1;

// while (left < right) {

//     int sum = nums[left] + nums[right];

//     if (sum == target) {
//         // found
//     }
//     else if (sum < target) {
//         left++;
//     }
//     else {
//         right--;
//     }
// }
