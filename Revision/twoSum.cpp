#include <iostream>
using namespace std;
bool twoSum(int arr [ ] , int n , int k){
    for(int i = 0 ;  i < n ;  i++){
        for(int j = i +1 ; j < n  ; j++){
            if(arr[ i] +arr[j]==k){
                return true;
            }
        }
    }
    return false;
}
int main() {
   int arr [] = {10 ,20,30,40,50};
   int size =  5;
   int target = 70;
  bool res = twoSum(arr,size,target);
  cout<<res<<endl;

    return 0;
}