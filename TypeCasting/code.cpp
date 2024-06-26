#include<iostream>
using namespace std;
int main(){
    //int to float
int num1 = 10;
float  num2 = 5.5;
float answer = num1 + num2;
// cout<<answer<<endl;

///char to int
// char ch = 'A';
// int a = ch + 1;
// cout<<a <<endl;



//int to char   

// int  a = 97;
// char chg = a;
// cout<<chg<<endl;


//Explicit casting 
//1.double to int 
double pi = 3.14159;
int intpi = (int)pi;
cout<<intpi<<endl;


//2.float to char
float floatingNumber = 65.35;
char charValue = (char)floatingNumber;
cout<<charValue<<endl;
    return 0;
}