#include<iostream>
using namespace std;
int main(){
    int arr[]={4,23,43,0,5};
    int n=5;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            int int_min = arr[i];
            if(int_min>arr[j+1]){
                swap(arr[i],arr[j+1]);
            }
        }
    }
    for(int num : arr){
        cout<<num<<" ";
    }
}