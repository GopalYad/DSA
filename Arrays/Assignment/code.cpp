#include <iostream>
using namespace std;
bool keyPair(int arr[],int size,int x){
    //linear time complexity - o(n)
    //two -pointer approach
  int l = 0 ;
  int h = size-1;
  while(l<h){
    int sum = arr[l]+arr[h];
    if(sum == x){
        return true;
    } else if(sum>x){
        h--;
    } else{
        l++;
    }
  }
return false;
}

int main(){
  int arr[]={1,2,4,3,6};
  int size=5;
  int x=10;
  bool ans = keyPair(arr,size,x);
  cout<<"key is present or not :"<<ans<<endl;









    return 0;
}