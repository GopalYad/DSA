#include <iostream>
using namespace std;
int singleNumber(int arr[] , int n){
    int ans= 0;
    for(int i = 0 ; i <  n  ; i++){
      ans=ans^arr[i];
    }
    return ans;
}
int alterSingleNumber(int arr[ ] , int n ){
  for(int i = 0 ;  i < n  ; i+=2){
      if(i+1 >= n && arr[i]!=arr[i+1]){
          return arr[i];
      }
  }
   return arr[n-1];
}
int main() {
   int  arr[] = {1,1,2,2,3};
   int size = 5;
 int ans = singleNumber(arr , size);
 cout<<ans<<endl;

    return 0;
}