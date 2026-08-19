   //7. Reverse Integer
//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the 
//signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.

// Example 1:
// Input: x = 123
// Output: 321

#include<iostream>
#include<climits>
using namespace std;
int main(){
   int n;
   cout<<"enter a number to reverse :";
   cin>>n;
   long long reverse=0;    // here we use long long because if we use int it can cause overflow let say n is 1534236469
   while(n!=0){           // so after getting 964632435 when we do 964632435*10 + a(which is 1) it will give runtime error because 964632435*10 exceed the intere range
      int a = n%10;
      reverse=reverse*10+a;
      n=n/10;
   }
   if(INT_MIN <= reverse && reverse <= INT_MAX ){   //you cant use here if(INT_MIN <= x <= INT_MAX)
      cout<<reverse;                    // because C++ doesn't support chained comparisons like Python. and C++ evaluates it like this:(INT_MIN <= x) <= INT_MAX
   }
   else cout<<"0";
   
}

    //It also  works for negative numbers as well
    //because of how % and / behave with negative integers in C++.
         //-123 % 10 = -3 , -123 / 10 = -12