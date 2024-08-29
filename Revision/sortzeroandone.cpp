#include<iostream>
using namespace std;
void sortzerosandones(int arr[ ] , int n){
    int countZero = 0 ;
    int countOne = 0 ;
    for(int i = 0 ;  i < n ;  i++){
        if(arr[i]==0){
            countZero++;
        }if(arr[i]==1){
            countOne++;
        }
    }
    for(int i = 0 ;  i < countZero ;  i++){
        arr[i] = 0;
    }
    for(int i = countZero ;  i< n ; i++){
        arr[i] =1;
    }
}
void print(int arr[] , int n){
    for(int i = 0 ;  i < n ; i++){
        cout<<arr[i]<<endl;
    }
}
int main(){

    int arr[] ={0,1,1,0,1,0,1,0,0};
    int size = 9;
    sortzerosandones(arr,size);
    print(arr,size);
    return 0;
}