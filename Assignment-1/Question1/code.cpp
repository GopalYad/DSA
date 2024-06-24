// 1
// 12
// 1 3
// 1  4
// 12345


#include<iostream>
using namespace std;
int main(){

 int n = 5;

 for(int row = 0 ;  row < n ; row++){
    for(int col = 0 ; col<=row ; col++){
        // cout<<col+1 << " ";
        if(col == 0 || row ==0 ||row == n-1 ||row==col){
          cout<<col+1 << "";  
        } else{
            cout<< " ";
        }
    }
    cout<<endl;
 }

    return 0;
}