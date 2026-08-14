        //189. Rotate Array (leetcode)
              //reverse and rotate are completely different
              // ler say int arr[]={1,2,3,4,5};
              // reverse is = [5,4,3,2,1] and rotate by 1 is [5,1,2,3,4] , rotate by 2 is [4,5,1,2,3]
              //and if we rotate an n-sized of array n times it will give us the original array



        //1). this is the brute force approach , basically write code to rotate an array by 1 time clockwise
        //     and then run the code for k times by loop ( so it will rotate array k times )
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n =5;
    int k=2; 
    for(int i = 1 ; i<=k ; i++){
    int temp = arr[n-1];
    for(int i=1;i<=n-1;i++){
        arr[n-i]=arr[n-i-1];  //arr[i]=arr[i-1]; (this is wrong because if we store a[1] me a[0] value and then arr[2] me arr[1] value to ulitmately arr[2] me arr[0] value hi to aayi and then so on )
    }
    arr[0]=temp;

}
    for(int num : arr){
        cout<< num <<endl;
    }
}
//                         // its time complexity O(n)for rotating one time coz one loop for n times and for rotating k times its O(Kn)
                        //  and spaxe complexity O(1) coz all variablr taking 1 value
                        // beacuse temp is not dependent of size of array n no matter how big n is temp will store only 1 value (There is no extra array or memory proportional to n.)


   // the 2nd one using swap

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n =5;
    int k=2;
    for(int i = 1 ; i<=k ; i++){
    for(int i=1;i<=n-1;i++){
        swap(arr[n-i],arr[n-i-1]);   //basically you can dry run this, the last element will swap with 2nd last and so on and all the elements will go 1 index ahead
    }

}
    for(int num : arr){
        cout<< num <<endl;
    }
}
                        //its time and space complexity both same as above solution just in this we dont need another tem varialbe to store last value   


                        
    //NOW for better time complexity which is O(n) to rotate an array k times
//the 3rd and most efficient one

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n =5;
    int k=2;              //here we have taken k value ourself but we have to use k=k%n or use while loop till k is greater than n and do k=k-n evrytime inside the loop
                         //becasue in 2nd step if k is greater than n we cant acces arr[k-1] and it will give us error
                         //and we know after n time rotate we get same array so we can use both approach k=k%n or while loop while till k is greater than n and do k=k-n evrytime inside the loop
    //1). reverse the array [0....n-1]
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    // 2).reverse the array [0...k-1]
     i=0;
     j=k-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    // 3). reverse the array [k....n-1]
     i=k;
     j = n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(int num : arr){
        cout<< num <<endl;
    }
}
                            // its time complexity will be O(n) linear time
                    // for the ist loop, reverse the entire array , it will run n/2 time (which is linear btw (1/2)n which is n itself )
                    // in the 2nd step, reverse the array from 0 to k-1 , it will runs k/2 times ( which is also linear)
                    // in the 3rd step , reverse the array from k to n-1 ,(n-k)/2 which is linear too )

              //so when we add all linear time we'll get linear time O(n) itself    
              //you can do it manually also add all these n-2 + k/2 + n/2 - k/2 = n .
              // and space complexity will be O(1)   
