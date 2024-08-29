#include <iostream>
using namespace std;
int singleNumber(int arr[] , int n){
    int ans= 0;
    for(int i = 0 ; i <  n  ; i++){
      ans=ans^arr[i];
    }
    return ans;
}
int main() {
   int  arr[] = {1,1,2,2,3};
   int size = 5;
 int ans = singleNumber(arr , size);
 cout<<ans<<endl;

    return 0;
}