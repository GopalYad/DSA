#include <iostream>
using namespace std;
void TwoPointSortingZeroAndOne(int arr[], int size){
    int l = 0 ;
    int h =  size -1;
    while(l<=h){
       if(arr[l]==0){
           l++;
       }else if(arr[l]==1){
           swap(arr[l],arr[h]);
           h--;
       }
    }
}
void printing(int arr [] ,  int n){
    for(int i = 0 ;  i < n  ; i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr [] = {0,1,1,0,0,1,0};
    int size = 7;
    TwoPointSortingZeroAndOne(arr,size);
    printing(arr,size);
    return 0;
}