#include <iostream>
using namespace std;
int main() {
   char arr [100]  = "gopalyadav"; 
   char* ptr = arr;
  
   cout<<arr<<endl;
   cout<<&arr<<endl;
//   cout<<&arr[0]<endl;
   cout<<&ptr<<endl;
   cout<<*ptr<<endl;
   cout<<*(ptr+3)<<endl;
   cout<<ptr+3<<endl;
    return 0;
}