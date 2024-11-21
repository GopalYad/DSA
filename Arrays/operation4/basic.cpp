
#include <iostream>
using namespace std;
int main() {
    //creation
    // int arr[10];
    //error
    // int brr[];
    
    int crr [] = {10,30,50};
    
    int drr[4]= {0};
    cout<<drr[0]<<endl;
    cout<<crr[0]<<endl;
    cout<<crr[1]<<endl;
    cout<<crr[2]<<endl;
    cout<<crr[3]<<endl;
    
    //fill
    
    int arr[4];
    fill(arr,arr+4,23);
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    
    
    // input
    
    int err[5];
    for(int  index = 0 ; index< 10 ;  index++){
        cout<<"Enter the value for box index:"<<index<<endl;
        cin>>err[index];
    }
    
    for(int index = 0 ; index<10; index++){
        cout<<err[index]<<" ";
    }

    return 0;
}