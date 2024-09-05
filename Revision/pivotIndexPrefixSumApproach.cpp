
#include <iostream>
#include <vector>
using namespace std;
int prefixsumApproach(vector<int>arr , int n){
    vector<int>lsum(n,0);
    vector<int>rsum(n,0);
  
    for(int i = 0 ; i < n ; i++){
        lsum[i] =lsum[i-1]+arr[i-1];
    }
  
    for(int i = n-2 ;  i>=0 ;i-- ){
        rsum[i] =rsum[i+1]+arr[i+1];
    }
    for(int i = 0 ; i < n ; i++){
        if(lsum==rsum){
            return i;
        }
    }
    return -1;
}
int main() {
  vector<int> arr;
  arr.push_back(1);
  arr.push_back(7);
  arr.push_back(3);
  arr.push_back(6);
  arr.push_back(5);
  arr.push_back(6);
//   vector<int>::iterator it = arr.begin();
//      while(it != arr.end()){
//       cout<<*it<<endl<<" ";
//       it++;
//      }
  int n = 6 ;
  int res = prefixsumApproach(arr,n);
  cout<<res<<endl;
  
    return 0;
}