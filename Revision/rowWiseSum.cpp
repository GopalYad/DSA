// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void rowWiseSum(int arr[][3],int rSize,int cSize){
    for(int i = 0 ; i < rSize ; i++){
         int sum = 0;
        for(int j = cSize-1;  j >=0 ; j--){
               sum+=arr[i][j];
            }
             cout<<sum<<endl; 
        }
    }


int main() {
   //rowWise sum
  int arr[3][3] ={{10,20,30},{40,50,60},{70,80,90}};
  int rSize =3;
  int cSize=3;
  rowWiseSum(arr,rSize,cSize);
    return 0;
}