#include <iostream>
using namespace std;
int main() {
   int a = 10 , b =20;
   b = a+b;
   a=b-a;
   b=b-a;
   cout<<a<<","<<b<<endl;
   
   
   int c1 = 5 , c2 = 10;
   c1 = c1^c2;
   c2= c1^c2;
   c1=c1^c2;
   cout << c1 << ","<< c2<<endl;
   
   int tem , b1 = 5 , b2=3;
   tem =b1;
   b1=b2;
   b2=tem;
   cout<< b1 << "," <<b2<<endl;
    return 0;
}