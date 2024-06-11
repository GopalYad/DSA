#include <iostream>
#include <limits.h>
using namespace std;
 //finding maximum and minimum element of an array by using differets methods.
 int maxUsingArithmatic(int a , int b)
 {
    return (a+b +abs(a-b))/2;
 }
 int maxElmentMethod2(int arr[], int n)
 {
    //airthematic approach
    if(n==0){
        return INT_MIN;
    } 
    int max = arr[0];
    int i = 0;
    while(i<n){
        max=maxUsingArithmatic(max,arr[i]);
     i++;
    }
    return max;
 }
int maxElement(int arr[] , int n){
 int max = INT_MIN;
 int i = 0;
 while(i<n){
   if(arr[i]>max){
    max=arr[i];
   }
   i++;
 }
 
 return max;
}
int main(){
    //finding maximum and minimum element of an array by using differets methods.
    int arr[] = {10,30,20,60,50,40};
    int size=5;
    // int result = maxElement(arr,size);
    // cout << result<<" ";
    
   int result = maxElmentMethod2(arr,size);
   cout <<result<<endl;
    return 0;
}
