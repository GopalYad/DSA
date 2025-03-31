#include<iostream>
using namespace std;
int main(){
 int marks[]={1,2,3,4};
//  cout<<marks[0];
//  cout<<marks[1];
//  cout<<marks[2];
//  cout<<marks[3];

//   int i = 0 ;
//   while(i<4){
//     cout<<"the value of marks at :"<<i<<"is :"<<marks[i]<<endl;
//    i++;
//   }
//   int j =0;
//   do{
//     cout<<"the value of marks at :"<<j<<"is :"<<marks[j]<<endl;
//     j++; 
//   }while(j<4);


  //pointer and array
  int* p = marks;
//   cout<<"the value of marks[0] is"<<*p<<endl;
//   cout<<"the value of marks[1] is"<<*(p+1)<<endl;
//   cout<<"the value of marks[2] is"<<*(p+2)<<endl;
//   cout<<"the value of marks[3] is"<<*(p+3)<<endl;

  int i = 0 ;
  while(i<4){
    cout<<"the value of marks[0] is"<<*(p+i)<<endl;
    i++;
  }
 
return 0;
}