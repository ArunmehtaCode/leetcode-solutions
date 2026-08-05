         //231. Power of Two
         //Given an integer n, return true if it is a power of two. Otherwise, return false.

#include<iostream>
using namespace std;
int main(){
        int count=0;
        int n ;
        cout<<"enter the numbeer ";
        cin>>n;
        if(n<=0){
            return false;
        }
        while(n!=0){        //here the simple approach is power of 2 means only 1 set bit, like 1,10,100,1000,1000 are 1,2,4,8 i.e power of two contains 
            if(n&1){     //only one 1 bit in the binary format so we'll check every bit of the number and if 1 comes we will increase count by 1 and if count become more than 1
               count++;       // that means more than one 1 bit are there, so not power of two and then right shift the number to check next bit
            }
            n=n>>1;
        }
        if(count>1){
            cout<<"false";
        }
        else{
            cout<< "true";
        }
        
    }



                // now thw mosst optimized and shorter approach is 
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the numbeer ";                      // A power of 2 has exactly one set bit.
    cin>>n;                                          // n & (n-1) removes the only set bit in a power of 2 number,means number become power of 2 only when previous all bits are used like 4(100) only when all previous bits used 3(011) like 8(1000) when all previous bit used 7(0111) so if a no. is power of 2 then its and its previous number & will give 0 ,so the result becomes 0.
    bool x =  n>0 && ((n&(n-1))==0);                   // this extra condition n>0 is only for to make sure number is not 0 or -ve.
    cout<<x;  //0 means false and 1 means true
}    
                       //its time complexity and space complexity both is o(1)
    



 //n & (n-1) removes the righmost set bit(1) from n (VERY VERY IMPORTANTTTT POINT FOR BIT MANIPULATION)