#include <iostream>
int removeDublicateFromSortedArray(int arr[], int n){
    int j =0;
    int i =1;
    while(i<n){
        if(arr[i]==arr[j]){
            i++;
        } else{
            j++;
            arr[j]=arr[i];
            i++;
        }
      
    }
    return j+1;
}
using namespace std;
int main() {
  int arr [] ={0,0,1,1,1,2,2,3,3,3,4};
  int n =11;
  int result =removeDublicateFromSortedArray(arr,n);
  for(int i = 0 ; i < result ; i++){
      cout<< arr[i]<< " ";
  }
    return 0;
}