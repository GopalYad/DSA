#include <iostream>
using namespace std;
int main() {
    int arr [] = {10,20,30,40,50};
    int* ptr = arr;
    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    cout<<*arr +1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+3)<<endl;
    



    int arr [] = {100,200,300,400,500};
    int* p = arr;
    int* q = arr+1;
    cout<<arr<<endl;
   cout<<&arr<<endl;
     cout<<arr[0]<<endl;
    cout<<&arr[0]<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    cout<<q<<endl;
    cout<<&q<<endl;
    cout<<*q<<endl;
  
    
        return 0;
}