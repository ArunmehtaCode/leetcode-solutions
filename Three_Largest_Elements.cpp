       //Three Largest Elements 
//Given an array of  N  integers, design an algorithm to find the three largest elements present inside the given array 

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={2,43,23,3,12,67};
    int n=6;
    int fL = INT_MIN;   //first largest
    int sL = INT_MIN;   //second largest
    int tL = INT_MIN;   // third largest 
    for (int i=0;i<n;i++){
        if(arr[i]>fL){
            tL=sL;
            sL=fL;
            fL=arr[i];
        }
        else if (arr[i]>sL){
            tL=sL;
            sL=arr[i];
        }
        else if(arr[i]>tL){
            tL=arr[i];
        }
        
    }
    cout<<fL<<" "<<sL<<" "<<tL<<" ";
  
}

    //its time complexity is O(n)  