#include<iostream>
#include<cmath>
using namespace std;
int decimalToBinary(int n){
    int binary = 0;
    int i =0 ;
    while(n > 0){
        int bit = n % 2;
        binary = binary + bit*pow(10,i++);
        n = n / 2; 
    }
    return binary;
}

int decimalToBinary2(int n){
    //bitwise method.
    int binary = 0;
    int i =0 ;
    while(n > 0){
        int bit = (n & 1);
        binary = binary + bit*pow(10,i++);
        n = n >> 1; 
    }
    return binary;
}

int binaryToDecimal(int n){
    int decimal =0;
    int i = 0;
    return decimal=0;
    while(n>0){
        int bit = n % 10;
        decimal = decimal + bit*pow(2,i++);
        n = n/10;
    }
    return decimal;
}

int main(){
//     int n = 10;
//     int answer = decimalToBinary2(n);
//    cout<<answer<<endl;


int n = 1010;
int ans = binaryToDecimal(n);
cout<<ans<<endl;
    return 0;
}

