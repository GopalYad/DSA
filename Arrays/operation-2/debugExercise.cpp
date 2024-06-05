#include <iostream>
using namespace std;
void populate(int arr[],int n){
    int j=0;
    for(int i=0; i < n; i = i + 2){
        arr[n-j-1] = i+2; ///even
        arr[j] = i+1; //odd
        j++;
    }
}
void swapAlternate(int arr[],int size){

    for(int i=0;i<size-1;i=i+2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}
int pairSumToX(int input[], int size, int x){
	int pairs = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if(input[i] + input[j] == x) pairs++;
		}
	}
	return pairs;
}
int tripletSumToX(int input[], int size, int x){
	int triplets = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			for(int k=j+1; k<size; k++){
				if(input[i] + input[j] + input[k] == x) triplets++;
				cout <<input[i]<<","<<input[j]<<","<<input[k]<<endl;
			}
		}
	}
	return triplets;
}
void sort0and1s(int input[], int size){
	int nextZero = 0;
	for(int i=0; i<size; i++){
		if(input[i] == 0){
			int temp = input[nextZero];
			input[nextZero] = input[i];
			input[i] = temp;
			nextZero++;
		}
	}
}
void print(int arr [] , int n)
{
    for(int i = 0 ; i < n ; i++){
        cout <<arr[i]<<endl;
    }
}
int main() {
    // Write C++ code here
//  int arr [] = {0,0,0,0,0,0,0,0,0,0};
//  int size = 10;
//  populate(arr,size);
//  print(arr,size);
 
    // int arr[] = {1,2,3,4,5,6};
    // int size = 6;
    // swapAlternate(arr,size);
    // print(arr,size);
    
    
    // int arr [] = {1,2,3,4,5,6};
    // int size = 6;
    // int target = 14;
    // int res = pairSumToX(arr, size,target);
    // cout << "number of repeate pair of"<<target<<"is:"<<res<<endl;
    
    // int arr[] = {10,20,30,40};
    // int size = 4;
    // int target = 70;
    // int res = tripletSumToX(arr, size,target);
    // cout << "number of repeat tripket pair of"<<target<<"is:"<<res<<endl;
    
    
    int arr[]={0,1,0,1,0,1,1,0};
    int size =8;
   sort0and1s(arr,size);
    print(arr,size);
    return 0;
}