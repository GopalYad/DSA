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
//      for(int row = 0 ; row < n ; row++)
//    {
//     for(int col = 0; col <n-row;col++)
//     {
//         cout << "  ";
//     }
//     for(int col = 0; col <2*row+1;col++)
//     {
//         cout << "* ";
//     }
//     cout <<endl;
//    }

//    for(int row = 0 ; row < n ; row++)
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


  //half alpha-numeric pyramid

//  A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA
//    for(int row= 0 ; row <n; row++)
//    {
//       char ch;
//     for(int col =0; col < row+1; col++)
//     {
//          ch = col +1 + 'A'-1;
//         cout <<ch;
//     }
//     for(char alphabet = ch; alphabet>'A'; )
//     {
//          alphabet = alphabet-1;
//         cout <<alphabet;
//     }
//     cout <<endl;
//    }

    

    // for(int row = 0; row < n; row++)
    // {
    //     for(int col = 0; col < n-row-1; col++)
    //     {
    //         cout << "_";
    //     }
        
    //     int changeNum = row+1;
    //     for(int col = 0; col <changeNum ; col++)
    //     {
    //         cout <<col+1;
    //     }
    //     for(int col =changeNum ; col >0; col--)
    //     {
    //         cout << changeNum;
    //     }
       
    //     cout <<endl;
    // }


    // for(int row = 0; row < n; row++)
    // {
    //     for(int col = 0; col < n-row-1 ; col++)
    //     {
    //         cout << " ";
    //     }
    //     char ch = 'A'-1;
    //     for(int col = 0; col < row+1; col++)
    //     {
    //         ch = ch+1;
    //         cout <<ch << " ";
    //     }

    //     for(int col = ch; col >'A'-1; )
    //     {
    //         col--
    //         cout <<ch << " ";
    //     }
    //     cout <<endl;
    // }


    return 0;
}