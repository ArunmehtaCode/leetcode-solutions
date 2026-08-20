  //Last Occurrence in Sorted Array 
#include<iostream>
using namespace std;
int first_occcur(int arr[], int n , int target){
    int start = 0;
    int end = n-1;
    int ans=-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]>target){
            end = mid-1;
        }
        else if(arr[mid]<target){
            start = mid+1;
        }
        else{
             ans =mid;
             start = mid+1;  

        }
    }
    return ans;
}
int main(){
    int arr[] = {1,2,5,5,5,5,6,6,7,9};
    int n = sizeof(arr)/sizeof(int);
    int target = 5;
    cout<< first_occcur(arr,n,target);
}