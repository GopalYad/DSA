#include <iostream>
using namespace std;
int main() {
  int a = 5;
   int b =a;
//   int c = &a;
  int* ptr = &a;
  cout << a <<endl;
  cout<< &a <<endl;
  cout<<ptr <<endl;
  cout<<&ptr<<endl;
  cout<<*ptr<<endl;
  cout<<sizeof(ptr)<<endl;
   
   
  int xyz=15;
  int pqr =12;
  int* ptr2 = &xyz;
  int* ptr3= &pqr;
  cout<<ptr2<<endl;
  cout<<&xyz<<endl;
  cout<<&ptr2<<endl;
  cout<<ptr3<<endl;
  cout<<&pqr<<endl;
  cout<<&ptr3<<endl;
  cout<<*ptr2<<endl;
  cout<<*ptr3<<endl;
   
   
   char ch ='a';
   char* ptr4 = &ch;
   cout<<sizeof(ptr4)<<endl;
   
   long l = 1050;
   long* ptr5 = &l;
   cout<<sizeof(ptr5)<<endl;
   
   float  f =1.5;
   float* ptr6 = &f;
   cout<<sizeof(ptr6)<<endl;
   
//   int* ptr7 ;
//   cout<<*ptr7<<endl;
    
    
    int  g = 5;
    int* ptr7 = &g;
    cout<<g<<endl;  //5
    cout<<&g<<endl; //104
    // cout<<*g<<endl; //104
    cout<<ptr7<<endl; //104
    cout<<&pt7<<endl;  //104
    cout<<*ptr7<<endl;  //5
    cout<<ptr++<<endl;  //105
    cout<<*ptr/2<<<endl; //2
    cout<<*ptr++<<end; //6





      int a = 10;
  int* p = &a; 
  //copying a pointer
  int* q = p;

  cout<<"a"<<a<<endl;
   cout<<"&a:"<<&a<<endl;
    // cout<<"*a:"<<*a<<endl;
     cout<<"p:"<<p<<endl;
      cout<<"&p:"<<&p<<endl;
     cout<<"*p"<<*p<<endl;
       cout<<"q:"<<q<<endl;
      cout<<"&  :"<<&q<<endl;
     cout<<"*q"<<*q<<endl;
    return 0;
}