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


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[]={1,2,4,6,7,8,9};
    int i,c;
    int x=n;
     for(int i=0;i<n;i++){
        c=arr[i];
        arr[i]=arr[n-1];                //OR WE CAN USE SWAP FUNc.by simple swap(arr[i],arr[n-1]);
        arr[n-1]=c;
        n--;
         
    }
     for(int i=0;i<x;i++){
        cout<<arr[i] <<" "; 
    }
}

                // ONE other way to swap witout using another variable and swap function
                //is by using XOR
        //as we know a^a=0 , a^0=a , so we can do...
        //         a=a^b;   ( now a has a^b)
        //          b=a^b;  ( now b equals to (a^b)^b so b and b will cancel and gives 0 and then a^0 is a, so now b has a value)
        //          a=a^b;  ( a is still (a^b) and now it becomes (a^b)^b(which is equal to a now) means = (a^b)^a and it will gives b)
