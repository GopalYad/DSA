#include <iostream>
using namespace std;

int main() {
    int arr[] ={1,0,1,2,0,1,2};
 int l = 0 ; 
 int m = 0 ;
 int h = 6;
 while(m<=h){
     if(arr[m] ==0){
         swap(arr[l],arr[m]);
         l++;
         m++;
     }
     if(arr[m]==1){
         m++;
     }
     if(arr[m]==2){
         swap(arr[m],arr[h]);
         h--;
     }
 }
 for(int i = 0 ;  i < 7 ;  i++){
     cout<<arr[i]<<" ";
 }
 

    return 0;
}