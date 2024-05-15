#include <iostream>
using namespace std;

int main(){
    //creation
//     int arr[10];
//    //error
//     // int brr[];
//     int crr[]= {1,3,5,8,6,9};
//     cout << crr[0]<<endl;
//     cout << crr[1]<<endl;
//     cout << crr[2]<<endl;
//     cout << crr[6]<<endl;

     int arr[4];
     fill(arr, arr+4,23);
     cout << arr[0] << " " <<arr[1] <<" " <<arr[2] << " " << arr[3] <<" ";
    return 0;
}