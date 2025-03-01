#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 int sumofNumber(int n){
    if(n==0){
        return 0;
    }
    return n + sumofNumber(n-1);
 }
 int fun1(int x , int y){
    if(x==0)return y;

    return fun1(x-1,x+y);
 }

int min_index(int arr [] , int s , int e ){
    int min = INT_MAX;
    int minIdx;
    for(int i = s ; i < e ; i++ ){
        if(min>arr[i]){
            min = arr[i];
            minIdx=i;
        }
    }
    return minIdx;
}

void fun2(int arr [] , int s ,  int e){
    if( s>=e)return;
    int minIdx;
    minIdx= min_index(arr,s,e);
    swap(arr[s],arr[minIdx]);
    fun2(arr,s+1,e);
}



int main(){
   cout<< sumofNumber(5)<<endl;


   int arr [] ={5,4,3,2,1};
   int n =5;
   int s=0;
   int e = n;
   fun2(arr,s,e);
   for(int i = s ; i < e ;i++){
    cout<<arr[i]<<" ";
   }


    return 0;
}