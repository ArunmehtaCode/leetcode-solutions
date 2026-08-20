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
    while(n!=0){  // or we can just write while(n)
        int a =n&1;
        int reversebit=!a;
        // int reversebit = n^1; (we cant use this beacuse, yes XOR with 1 flip the lastbit but it will return complete binary number with last bit flipped not only the last flipped bit)
        ans = ans + pow(2,i)*reversebit;
        i++;
        n=n>>1;
    }
    cout<<ans;
 }

     // Approach 2
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number to flip its bits :";
    cin>>n;
    int num =n;                          //For Approach 2, our goal is simply:
    int mask =0;              //mask me utne hi 1 bits banane hain jitne n me total bits hain.
    while(num){   // and then mask ka n se XOR kr denge as mask me sari bits 1 hai means XOR krne pr n ki sari bits flip ho jayengi
                             // beacuse  n ^ 1 flips the last bit All other bits remain unchanged. ,If LSB is 1 → becomes 0, If LSB is 0 → becomes 1 
        mask = mask<<1;
        mask = mask | 1;
        num=num>>1;
    }
    int c = mask ^ n;
    cout<<c;
}