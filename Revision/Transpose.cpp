#include <iostream>
using namespace std;
void convertTransposeMatrix(int arr [3][3] ,int rSize,int cSize){
     for(int i = 0 ; i < rSize ; i++){
   
       for(int j = 0 ; j<cSize ; j++){
         arr[i][j] =arr[j][i];
       }
   
   }
   
     for(int i = 0 ; i < rSize ; i++){
   
       for(int j = 0 ; j<cSize ; j++){
          cout<<arr[i][j]<<" ";
       }
   
       cout<<endl;
   }
   
}

int main() {
      int arr[3][3] ={{10,20,30},{40,50,60},{70,80,90}};
  int rSize =3;
  int cSize=3;
   convertTransposeMatrix(arr,rSize,cSize);

    return 0;
}