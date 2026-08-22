         //204. Count Primes
         //Given an integer n, return the number of prime numbers that are strictly less than n.

//First it is brut force approach and in leetcode it will give TLE error
#include <iostream>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {

        if (n <= 2)
            return 0;

        int count = 0;

        for (int i = 2; i < n; i++) {

            bool prime = true;

            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    prime = false;
                    break;
                }
            }

            if (prime)
                count++;
        }
 
        return count;
    }
};

