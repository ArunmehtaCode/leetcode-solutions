#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,3,1,5,4,0,9};
    int n=8;
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
