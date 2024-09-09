
#include <iostream>
#include <limits.h>
using namespace std;
// double maximumSubArraySum(int arr [] , int k,int n){
//     int maxSum = INT_MIN ;
//     int i = 0;
//     int j =k-1;
//     while(j < n){
//         int sum = 0 ;
//       for(int y = i  ; y <=j ;y++){
//           sum+=arr[y];
//       }
//         maxSum =max(maxSum,sum);
//           i++;
//           j++;
     
//     }
   
//   double maxAvg = (double)maxSum/k;
//       return maxAvg;

// }

double maximumSubArraySumTwoSlidingWindowAproach(int arr [] , int k,int n){
    int maxSum = INT_MIN ;
    int i = 0;
    int j =k-1;
   int sum = 0 ;
   for(int y = i ; y <=j;y++){
       sum+=arr[y];
       int maxSum = sum;
   }
   j++;
   while(j<n){
       sum -=arr[i++];
       sum+=arr[j++];
       maxSum = max(maxSum,sum);
   }
   double maxAvg = (double)maxSum/k;
      return maxAvg; 

}
int main() {
    // nums = [1,12,-5,-6,50,3], k = 4
   int arr [] ={1,12,-5,-6,50,3};
   int k =4;
   int n =6;
  cout<< maximumSubArraySumTwoSlidingWindowApproach(arr,k,n)<<endl;

    return 0;
}