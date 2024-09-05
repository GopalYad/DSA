// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
bool search2Darray( vector<vector<int> >arr,int rSize,int cSize,int target){
    
     for(int i = 0 ; i < rSize ; i++){
       for(int j = 0 ; j<cSize ; j++){
          if(arr[i][j]==target){
              return true;
              
          }
       }
   }
    return false;
}
int main() {
  //vector 2D array
  vector<vector<int> >arr(4,vector<int>(3,0));
  int rowSize =arr.size();
  int colSize = arr[0].size();
  for(int i = 0 ; i < rowSize ; i++){
      for(int j = 0 ; j < colSize ; j++){
        cin>>arr[i][j];
      }
    
  }
  int target = 23;
  bool ans  = search2DArray(arr,rowSize,colSize,target);
  cout<<ans<<endl;
    return 0;
}