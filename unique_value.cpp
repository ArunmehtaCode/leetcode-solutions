                       //Program to find unique value like in 12621 tha output will be 6

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans =0;//to store the unique number 
    
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
     ans=ans^x;

    }
    cout<<"the unique number is"<<ans;
}