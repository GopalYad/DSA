#include <iostream>
using namespace std;
void rotateArray(int arr [] , int n , int k ){
    int shift = k%n;
    //step1 : store k last element
    int tem [1000];
    int index = 0;
    for(int i = n-shift ; i<n ; i++) {
        tem[index]=arr[i];
        index++;
    }
    for(int i = n -1 ; i >=0 ; i--){
        arr[i]=arr[i-shift];
    }
    for(int i = 0 ; i< shift ; i++){
        arr[i] =tem[i];
    }
}
void printing(int arr[], int n ){
    for(int i = 0 ;  i < n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
  int arr [] = {10,20,30,40,50,60};
  int n = 6;
  int k = 3;
  rotateArray(arr,n,k);
  printing(arr,n);

    return 0;
}