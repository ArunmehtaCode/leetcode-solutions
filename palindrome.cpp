                //9. Palindrome Number (leetcode)
                         // one imp thing why we used long long here instead of int
// beacuse let say our number is 123456654321 if we take int, the output will be wrong because int can store only -2,147,483,648 to 2,147,483,647
//But your number is 123456654321, That's much larger than 2,147,483,647. causing integer overflow.
  // thats why we have used long long so that we can check even bigger numbers

#include<iostream>
using namespace std;
bool palindrome(long long n){
    long long original =n;
    long long reversed = 0;
    if(n<0){
        return false;
    }
        while(n!=0){
            int x=n%10;
            reversed = 10*reversed + x;
            n=n/10;
        }
        return (original==reversed);

    }
    int main(){
    long long n;
    cout<<" Enter a number :";
    cin>>n;
    cout << boolalpha << palindrome(n) ;   // By default, std::cout prints true as 1 and false as 0. You can force it to print the 
    }                                      // literal words "true" and "false" by using the std::boolalpha