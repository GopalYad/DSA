#include <iostream>
#include <cmath>
using namespace std;
// int binaryToDecimal2(int n) {
//     int decimal = 0;
//     int i = 0;
//     while (n > 0) {
//         int bit = n & 1;  // Get the last bit of n
//         decimal += bit * (1 << i);  // (1 << i) is the same as pow(2, i)
//         n = n >> 1;  // Shift n right by 1 to process the next bit
//         i++;
//     }
//     return decimal;
// }
  int binaryToDecimal(int n){
    //divison method
    int decimal = 0;
    int i = 0;
    while(n>0){
        int bit = n %10;
        decimal+=bit*pow(2,i++);
        n=n/10;
    }
    return decimal;
  }
  int decimalToBinaryMethod2(int n){
   int binaryno=0;
    int i = 0;
      while (n>0)
      {
        int bit = n &1;
        binaryno=bit*pow(10,i++)+binaryno;
        n =n>>1;
      }
      return binaryno;
        

  }
 int decimalToBinaryMethod1(int n){
    int binaryno=0;
    int i = 0;
      while (n>0)
      {
        int bit = n %2;
        binaryno=bit*pow(10,i++)+binaryno;
        n =n/2;
      }
      return binaryno;
        
    }
int main(){
    ///decimal to binary
    int n;
     cin >>n;
     int binary = decimalToBinaryMethod1(n);
     cout << binary<<endl;
     int binary2 = decimalToBinaryMethod2(n);
     cout << binary2 <<endl;

     int binaryno;
     cin>>binaryno;
     cout << binaryToDecimal(binaryno)<<endl;
      cout << binaryToDecimal2(binaryno)<<endl;
     

    return 0 ;
}