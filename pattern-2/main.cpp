#include <iostream>
using namespace std;
int main(){

////print reactange pattern
// *****
// *****
// *****
// *****
// *****
    int n;
    cout <<"enter value of n:";
    cin >> n; 
    // for(int row = 0 ; row <n; row++ )  ///outer loop for print row
    // {
    //   //inner loop for printing column
    //     for(int col = 0 ; col < n ; col++)
    //     {
    //         cout << "*";
    //     }
    //     //print next line for seperating rows
    //     cout <<endl;
    // }


    ///printing half pyramid
// *
// **
// ***
// ****
// *****

    // for(int row = 0 ; row <n; row++)
    // {
    //     for(int col = 0; col < row+1; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

  

    //printing numerwing pyramid
// 1
// 22
// 333
// 4444

    // for(int row = 0 ; row < n ; row++)
    // {
    //     for(int col = 0; col < row+1 ; col++)
    //     {
    //         cout <<row+1;
    //     }
    //     cout <<endl;
    // }

     //number columsice pyramid
// 1
// 12
// 123
// 1234
// 12345
    // for(int row = 0; row < n ; row++)
    // {
    //     for(int col = 0 ; col < row+1; col++)
    //     {
    //         cout << col+1;
    //     }
    //     cout<<endl;
    // }
    


    //inverted half pyramid
// *****
// ****
// ***
// **
// *
    // for(int row = 0 ; row < n ; row++)
    // {
    //     for(int col = 0; col < n-row ; col++)
    //     {
    //         cout <<"*";
    //     }
    //     cout <<endl;
    // }

    //inverted numeric pyramid
// 12345
// 1234
// 123
// 12
// 1
    // for(int row = 0 ; row <n; row++)
    // {
    //     for(int col = 0; col <n-row; col++)
    //     {
    //         cout << col+1;
    //     }
    //     cout <<endl;
    // }

   
   ///full pyramid
//      *
//    * * *
//   * * * * *
//  * * * * * * *

//    for(int row = 0 ; row < n ; row++)
//    {
//     for(int col = 0; col <n-row;col++)
//     {
//         cout << " ";
//     }
//     for(int col = 0; col <2*row+1;col++)
//     {
//         cout << "* ";
//     }
//     cout <<endl;
//    }
   

   //inverted full pyramid
// * * * * * * * * * 
//   * * * * * * *
//     * * * * * 
//       * * *
//         *
//   for(int row = 0 ; row < n ; row++)
//    {
//     for(int col = 0; col <row;col++)
//     {
//         cout << "  ";
//     }
//     for(int col = 0; col <2*n-2*row -1;col++)
//     {
//         cout << "* ";
//     }
//     cout <<endl;
//    }

      
      //diamond shape pattern

//         * 
//       * * *
//     * * * * *
//   * * * * * * *
//  * * * * * * * 
//    * * * * *
//      * * *
//        *
     for(int row = 0 ; row < n ; row++)
   {
    for(int col = 0; col <n-row;col++)
    {
        cout << "  ";
    }
    for(int col = 0; col <2*row+1;col++)
    {
        cout << "* ";
    }
    cout <<endl;
   }

   for(int row = 0 ; row < n ; row++)
   {
    for(int col = 0; col <row;col++)
    {
        cout << "  ";
    }
    for(int col = 0; col <2*n-2*row -1;col++)
    {
        cout << "* ";
    }
    cout <<endl;
   }
    return 0;
}