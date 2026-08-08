                       //136. Single Number
                       //Program to find unique value like in 12621 the output will be 6

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans =0;//to store the unique number 
    
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
     ans=ans^x;     //in ist iteration, x will xor with ans which is 0 now and any number xor with 0 gives that number
                    //as what will happen is same no xor with same no gives 0 and all other duplicates no will xor with its duplicate same no and gives 0 as order does not matter in xor phle kisko bhi kisse kro   
                    //and in the end we will left with 0 and a uniqye no and on xor the unique number with 0 will give us the unique number
    }
    cout<<"the unique number is"<<ans;
}