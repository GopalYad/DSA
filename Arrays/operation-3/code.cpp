#include <iostream>
using namespace std;
bool binarySearch(int arr[] , int n , int target){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==target){
            return true;
        }
        if(arr[mid]<target){
            s=mid+1;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
    }
}

int main(){
int arr[]={10,20,30,40,50,60,70};
int n = 7;
int target=60;
bool ans = binarySearch(arr,n,target);
cout<<"target element is found or not:"<<ans<<endl;







    return 0;
}