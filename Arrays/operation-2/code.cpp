#include<iostream>
using namespace std;
int findUniqueNumber(int arr [] , int n){
    int ans = 0;

    //to find the final answer,we need to xor all the number in array.
    for(int i = 0; i < n ; i++){
        ans = ans ^arr[i];
    }
    return ans;
}
 int singleNumber(int nums [] , int n ) {
        int ans = 0;
       for(int i = 0; i <n; i++){
        for(int j = i+1; j < n; j++){
            if(nums[i]==nums[j]){
                nums[i] = 0;
                nums[j] = 0;
               
            }
        }
       }
       for(int i = 0; i < n; i++){
          if(nums[i]!=0){
             ans = nums[i];
             break;
          }
       }
       return ans;
    }
 void sortZeroOnes(int nums[], int n){
    int countZero = 0;
    int countOnes = 0;
    for(int i = 0; i < n ; i++)
    {
      if(nums[i] == 0){
        countZero++;
      } 
      if(nums[i] ==1){
        countOnes++;
      }
    }
    for(int i = 0; i < countZero ; i++){
        nums[i]=0;
    }
    for(int i = countZero; i < n ; i++)
       nums[i] = 1;
 }
void printAllPairs(int nums[] , int n){
    for(int i  = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << nums[i] << "," << nums[j]<<endl;
        }
    }
}
int print (int arr[], int n){
    for(int i = 0; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
}


int main(){
  
  int  arr[] = {2,4,1,4,1};
  int size = 5;
  int ans = findUniqueNumber(arr, size);
  cout<<"Unique number is :" << ans << endl;
  int res = singleNumber(arr, size);
  cout << "Single number is :" << res << endl;
  int num[]= {0,1,1,1,0,0,1,1,0};
  int n = 9;
  sortZeroOnes(num,n);
  print(num,n);
  int nums[] = {10,20,30,40};
  int len = 4;
  printAllPairs(nums,len);



    return 0;
}