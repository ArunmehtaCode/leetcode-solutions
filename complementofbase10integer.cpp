      //1009. Complement of Base 10 Integer
//The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation
// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.

 // APPROACH 1
 #include<iostream>
 #include<math.h>
 using namespace std;
 int main(){
    int n;
    cout<<"enter a number to flips the bits :";
    cin>>n;
    if(n==0){
        cout<<"1";
    }
    int ans =0;
    int i=0;
    while(n!=0){
        int a =n&1;
        int reversebit=!a;
        ans = ans + pow(2,i)*reversebit;
        i++;
        n=n>>1;
    }
    cout<<ans;
 }