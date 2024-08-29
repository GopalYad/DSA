
#include <iostream>
using namespace std;
pair<int , int> checkTwoSum(int arr[ ] , int n , int k){
    pair <int , int> ans =  make_pair(-1,-1);
    for(int i = 0 ;  i < n  ; i++){
        for(int j = i+1 ; j <  n ;  j++ ){
            if(arr[i]+arr[j]==k){
                ans.first =arr[i];
                ans.second=arr[j];
                return ans;
            }
        }
    }
    return ans;
}
int main() {
  int arr[] ={10,20,30,40};
  int size = 4;
  pair<int , int> ans = checkTwoSum(arr,size,50);
  cout<<ans.first<<","<<ans.second<<endl;

    return 0;
}