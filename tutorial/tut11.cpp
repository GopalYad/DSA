#include<iostream>
using namespace std;
int main(){
   ///what is pointer ? --> datatype while hold the address of datatype
//    &-->ampercent
 

// &-->address of operator
// *-->dereference of operator
int a = 23;
int* b = &a;
int** c = &b;
cout<<"the address of a :"<<&a<<endl;
cout<<"the address of a:"<<b<<endl;
cout<<"the the value at  address of b:"<<*b<<endl;
cout<<"the the value at  address of c:"<<*b<<endl;
return 0;
}