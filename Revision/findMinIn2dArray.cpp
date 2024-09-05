#include <iostream>
#include<climits>
using namespace std;
int findMinIn2dArray(int arr[][3], int rSize,int cSize){
    int minVal = INT_MAX;
    for(int i = 0 ; i < rSize; i++){
        for(int j = 0 ; j < cSize; j++){
            minVal=min(minVal,arr[i][j]);
        }
    }
    return minVal;
}
int main() {
 int arr[3][3] ={{10,20,30},{40,50,60},{70,80,90}};
 int rSize =3;
 int cSize =3;
 int res = findMinIn2dArray(arr,rSize,cSize);
 cout<<res<<endl;

    return 0;
}