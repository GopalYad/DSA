
#include <iostream>
using namespace std;
void rowWisePrinting(int arr [3][3] ,int rSize,int cSize){
     for(int i = 0 ; i < rSize ; i++){
       for(int j = 0 ; j<cSize ; j++){
           cout<<arr[i][j]<<"  ";
       }
       cout<<endl;
   }
}
void colWisePrinting(int arr [3][3] ,int rSize,int cSize){
     for(int i = 0 ; i < rSize ; i++){
       for(int j = 0 ; j<cSize ; j++){
           cout<<arr[j][i]<<"  ";
       }
       cout<<endl;
   }
   
}
void digonalWisePrinting(int arr [3][3] ,int rSize,int cSize){
     for(int i = 0 ; i < rSize ; i++){
       for(int j = 0 ; j<cSize ; j++){
           if(i==j){
           cout<<arr[i][j]<<"  ";
           }
       }
       cout<<endl;
   }
//   for(int i = 0 ; i <rSize ;i++){
//       cout<<arr[i][i]<<" ";
//   }
}
void secDiagonalPrinting(int arr[3][3] ,int rsize ){
    for(int i = 0 ; i <rsize ;i++){
      cout<<arr[i][rsize-i-1]<<" ";
  }
}
int search2Darray(int arr[3][3],int rSize,int cSize,int target){
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
   int arr [3][3]={{10,20,30},{110,120,130},{210,220,230}};
   int rSize =3;
   int cSize =3;
   rowWisePrinting(arr,rSize,cSize);
   colWisePrinting(arr,rSize,cSize);
   digonalWisePrinting(arr, rSize, cSize);
   secDiagonalPrinting(arr,rSize);
   cout<<"ANS IS : "<< search2Darray(arr,rSize,cSize,220);
    return 0;
}