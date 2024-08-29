#include <iostream>
using namespace std;
 void printingPair1(int arr[] ,  int n ){
     for(int i  = 0 ;  i <  n  ;   i++){
         for(int j =  0 ;  j <  n  ;  j++){
             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
         }
         cout<<endl;
     }
 }
  void printingPair2(int arr[] ,  int n ){
     for(int i  = 0 ;  i <  n  ;   i++){
         for(int j =  i ;  j <  n  ;  j++){
             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
         }
         cout<<endl;
     }
 }
   void printingPair3(int arr[] ,  int n ){
     for(int i  = 0 ;  i <  n  ;   i++){
         for(int j =  0 ;  j <  i  ;  j++){
             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
         }
         cout<<endl;
     }
 }
 void printingPair4(int arr[] ,  int n ){
     for(int i  = 0 ;  i <  n  ;   i++){
         for(int j =  0;  j <=  i  ;  j++){
             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
         }
         cout<<endl;
     }
 }
  void printingPair5(int arr[] ,  int n ){
     for(int i  = 0 ;  i <  n  ;   i++){
         for(int j =  n-1;  j >=0  ;  j--){
             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
         }
         cout<<endl;
     }
 }
 void printingPair6(int arr[] ,  int n ){
     for(int i  = 0 ;  i <  n  ;   i++){
         for(int j =  n-1;  j >i  ;  j--){
             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
         }
         cout<<endl;
     }
 }
  void printingPair7(int arr[] ,  int n ){
     for(int i  = 0 ;  i <  n  ;   i++){
         for(int j =  i+1 ;  j <  n  ;  j++){
             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
         }
         cout<<endl;
     }
 }
int main() {
   int arr[] ={10,20,30,40};
   int n = 4;
   printingPair1(arr,n);
   cout<<endl;
   printingPair2(arr,n);
   cout<<endl;
   printingPair3(arr,n);
   cout<<endl;
   printingPair4(arr,n);
    cout<<endl;
   printingPair5(arr,n);
    cout<<endl;
   printingPair6(arr,n);
    cout<<endl;
   printingPair7(arr,n);
    return 0;
}