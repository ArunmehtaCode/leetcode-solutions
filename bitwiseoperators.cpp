                                                /*# LECTURE 5 BITWISE OPERATOR*/
                                    //Total 6 binary operator-  BITWISE AND, BITWISE OR , BITWISE NOT ,BITWISE XOR
                                    //BITWISE LEFT , BITWISE RIGHT
                      // precedence = ~ ,<<>>, & ,^ , |(higher to low)

#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=6;
    cout<<"a&b ="<<(a & b) << endl;     /*in AND(&) opertor if both will be 1 then the only answer will be 1 
                                                   a&b = 4&6 = 0b100 (THIS 0b IS JUST TO REPRESENT BINARY WE CAN WRITE OR NOT, NO EFFECT)
                                                               0b110
                                                               ----
                                                               0b100 which is equal to 4 so the output will be 4*/


    cout<<"a|b ="<<(a|b)<< endl;          /*in OR(|) operator if any of one is 1 then prpduct will be 1 
                                                    a|b = 4|6 = 100
                                                                110
                                                                ----
                                                                110 which is equal to 6 so the output will be 6*/


    cout<<"~a "<<(~a)<<endl;               /*NOT(~)operator
                                                   a=4 =100  --> ab inke aage bhut 0 honge like --> 000000000100
                                                      so ~a --> 111111111011 (in this we have 1 in ist places so there will be -ve sign in final output)
                                                      because it is negative number due to 1 so we cannot store it diectly we have to convert it to 2's compliment
                                                      so we have to find its 2s complement for that ist find 1s component
                                                       1's -->  000000000100 (jus change 1 to 0 and 0 to 1)
                                                      for 2's just add 1 in 1's
                                                       2's-->   000000000101
                                                      101 base 2 = 5 (with -ve sign due to 1 in ist place in~a)
                                                      so the final output will be -5*/


    cout<< "a^b "<<(a^b)<<endl;           /*in bitwise XOR(^)operator  table is like
                                                    X    Y      Z
                                                    0    0      0
                                                    0    1      1
                                                    1    0      1
                                                    1    1      0
                                               (basically if both value same so 0 otherwise 1)
                                                    so 4^6 =  010 =  which is equal to 2 */

                                  /* n ^ 1 flips the last bit All other bits remain unchanged. ,If LSB is 1 → becomes 0, If LSB is 0 → becomes 1 
                                  This is often used in bit tricks
                                e.g n = 10;   // decimal
                                its binary equilane is 1010
                                so n^1 gives 1011 which is 11, Only the last bit changed.  */

}
/*          HERE THE EXPLANATION              
Number	Binary Number	Number	Binary Number	
1	    1	             11	            1011	
2	    10	             12	            1100	
3	    11	             13	            1101	
4	    100	             14	            1110	
5	    101	             15	            1111	
6	    110	             16	            10000	
7	    111	             17	            10001	
8	    1000	         18	            10010	
9	    1001	         19	            10011	
10	    1010	         20	            10100

to find binary number of any number divide it by 2 untill its  quotient become 0.
 5 in decimal to binary:
 (5\2=2) remainder 1
 (2\2=1) remainder 0
 (1\2=0) remainder 1
    Reading the remainders from bottom to top,101 ,, SO 5 base 10 = 101 base 2 in binary

                   #FOR ADDITON OF BINARY NUMBER - RULES
(0+0=0)
(0+1=1)
(1+0=1)
(1+1=10 (write 0, carry 1) 
  101(5) 
+ 111(7)
 -----
 1100 (12)
 -----              
            # VERIFY THE RESULT TO CHECK THE ANSWER,
            convert the binary result ((1100 base 2) back to decimal:
            (1.2^{3} +1.2^{2} +0.2^{1} +0.2^{0})
            (1.8 +1.4 +0.2 +0.1)
            (8+4+0+0= 12 base 10)
            Since \(5+7=12\) in decimal, the binary addition is correct.  */