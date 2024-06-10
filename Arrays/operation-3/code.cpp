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

void findFirstOccurance(int arr[], int n , int target, int &ansIndex){
    int s =0 ;
    int e=n-1;
    while(s<=e){
        int mid = s+ (e-s)/2;
        if(arr[mid]==target){
            //ans found ->may or may not be first occurance.
            //store and compute
            ansIndex = mid;
            //kyoki left occurance ki baat ho rahi hain
            //toh batao left me jau first occurance ke liye
            //left me jao 
            e=mid-1;
        }
        if(arr[mid]<target){
            //right me jana hain
            s=mid+1;
        } else if(arr[mid]>target){
            //left me jao
            e=mid-1;
        }
    }
}

void findLastOccurance(int arr[], int n , int target, int &ansIndex){
    int s =0 ;
    int e=n-1;
    while(s<=e){
        int mid = s+ (e-s)/2;
        if(arr[mid]==target){
            //ans found ->may or may not be first occurance.
            //store and compute
            ansIndex = mid;
            //kyoki right occurance ki baat ho rahi hain
            //toh batao right me jau last occurance ke liye
            //right me jao 
            s=mid+1;
        }
        if(arr[mid]<target){
            //right me jana hain
            s=mid+1;
        } else if(arr[mid]>target){
            //left me jao
            e=mid-1;
        }
    }
}
int main(){
// int arr[]={10,20,30,40,50,60,70};
// int n = 7;
// int target=60;
// bool ans = binarySearch(arr,n,target);
// cout<<"target element is found or not:"<<ans<<endl;

int arr[] = {10,20,20,20,20,20,20,30,40,50,60};
int n = 11;
int target = 20;
int ansIndex=-1;
//binary search lagane ja raha hu toh array sorted hoga
findFirstOccurance(arr,n,target,ansIndex);
cout<<"first occurance index is :"<<ansIndex<<endl;
findLastOccurance(arr,n,target,ansIndex);
cout<<"last occurance index is :" <<ansIndex <<endl;





    return 0;
}