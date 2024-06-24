///print star pattern
// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 7*8*9*10
// 4*5*6
// 2*3
// 1
#include <iostream>
using namespace std;
int main() {
    int n = 4;
    int var=1;
    for(int row = 0 ; row < n ; row++)
    {
        for(int col= 0 ; col<2*row+1;col++ )
        {
            if(col%2==0){
                cout<<var++;
            } else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    int k = var - n;
    for(int row = n ; row>0 ; row--)
    {
        int start = k;
        for(int col = 0 ; col < 2*row-1; col++)
        {
            if(col%2==0){
                cout<<start++;
            } else{
            cout<<"*";
            k--;
            }
        }
        cout<<endl;
    }

    return 0;
}