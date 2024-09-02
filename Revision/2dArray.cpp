#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr [3][2] ={
        {10,20},
        {30,40},
        {50,60}};
    // cout<<arr[0][0]<<" ";
  
   for(int row  = 0 ; row < 3 ; row++){
       for(int col = 0 ; col <2 ; col++){
           cout<<"["<<arr[row][col]<<"]"<<" ";
       }
       cout<<endl;
   }
    return 0;
}