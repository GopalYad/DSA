
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void sortingAlgorithm(int arr[] , int n){
   
    for(int i = 0  ; i <= n-2 ; i++){
        int min = i;
      for(int j = i ;  j<=n-1; j++){
          if(arr[j]<arr[min]){
              min =j;
          }
       
      }
       swap(arr[i],arr[min]);
         
    }
    for(int i = 0 ;  i <=n-1; i++){
        cout<<arr[i]<<" ";
    }

}
int main() {
    // Write C++ code here
    int arr [] =  {-3, 0, -1, -3, 2, 0, 1};
    int n = 7;
    sortingAlgorithm(arr,n);
   
    return 0;
}