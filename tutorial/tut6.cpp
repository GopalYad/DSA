#include<iostream>
//there are two typef of header files
//system header files :it comes with this compiler
//2.user defined header files:it is written by the programmmer
// #include "this.h" //this will give error if it is not present in current dierectory
using namespace std;

int main(){
    int a=4,b=5;
   cout<<"Operators in c+:"<<endl;
   cout<<"Following are the Operators in c+:"<<endl;

   //Arithmetic operator
   cout<<"The value of a + b is :"<<a+b<<endl;
   cout<<"The value of a - b is :"<<a-b<<endl;
   cout<<"The value of a * b is :"<<a*b<<endl;
   cout<<"The value of a / b is :"<<a/b<<endl;
   cout<<"The value of a % b is :"<<a%b<<endl;
   cout<<"The value of a-- is :"<<a--<<endl;
   cout<<"The value of --a is :"<<--a<<endl;
   cout<<"The value of b++ is :"<<b++<<endl;
   cout<<"The value of ++b is :"<<++b<<endl;
   //a++ phle print karo phir increament karo
   //++a phle increament karo phir phir increament karo

   //assignment operator->used to assign value
//    int a=3,b=9;
//    char d='d';

   //comparison operators and logical operator
   cout<<"The value of a == b is"<<(a==b)<<endl;
   cout<<"The value of a != b is"<<(a!=b)<<endl;
   cout<<"The value of a >= b is"<<(a>=b)<<endl;
   cout<<"The value of a <= b is"<<(a<=b)<<endl;
   cout<<"The value of a > b is"<<(a>b)<<endl;
   cout<<"The value of a < b is"<<(a<b)<<endl;


//  logical operator
   cout<<"The value of ((a==b) && (a<b)) is"<<((a==b) && (a<b)) <<endl;
   cout<<"The value of ((a==b) || (a<b)) is"<<((a==b) || (a<b)) <<endl;
   cout<<"The value of (!(a==b)) is"<<(!(a==b) ) <<endl;
  
    return 0;
}