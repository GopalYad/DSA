#include <iostream>
using namespace std;
void colWiseSum(int arr [3][3] ,int rSize,int cSize){
     for(int i = 0 ; i < rSize ; i++){
         int sum = 0 ;
       for(int j = 0 ; j<cSize ; j++){
         sum+=arr[j][i];
       }
       cout<<sum<<endl;
   }
   
}
int main() {
      int arr[3][3] ={{10,20,30},{40,50,60},{70,80,90}};
  int rSize =3;
  int cSize=3;
  colWiseSum(arr,rSize,cSize);

    return 0;
}