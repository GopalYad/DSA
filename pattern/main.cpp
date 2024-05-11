#include <iostream>
using namespace std;
int main()
{

//   for(int i  = 1 ; i <5 ; i++)
//   {
//     cout << i << "->";

//     for(int j = 1 ; j <=2 ; j++)
//     {
//         cout<<"*";
//     }
//     cout <<endl;
//   }
      int length ;
      int breath;
     cout << "Enter values of lengths and width for rectangle :" <<endl ;
     cin >>length;
      cin >>breath;

      for(int row = 0 ; row <length; row++)
      {
        for(int col = 0 ; col <breath; col++)
        {
            cout << "*";
        }
        cout<<endl;
      }




    int n ;
    cout << "enter the value of n :";
    cin >> n;
          
     for(int row = 0 ; row < n; row++)
    {
        for(int col  = 0 ; col <row+1 ; col++)
        {
            if(col == row){
                cout << row+1;
            } else{
                 cout<<row+1 << "*";
            }
         
        }
        cout <<endl;
    }
    
    
     for(int row = 0 ; row < n; row++)
    {
        for(int col  = 0 ; col <n-row ; col++)
        {
            if(col == n-row-1){
                cout << n-row-1;
            } else{
                 cout<<n-row-1<< "*";
            }
         
        }
        cout <<endl;
    }
    
    
    // for(int row = 0 ; row < n; row++)
    // {
    //     for(int col  = 0 ; col <2*row+1 ; col++)
    //     {
    //       if(col % 2 == 0){
    //           cout <<row+1;
    //       } else{
    //           cout << "*";
    //       }
    //     }
    //     cout <<endl;
    // }
    // for(int row = 0 ; row < n ; row++){
        
    //     for(int col = 0; col <n-row ; col++){
    //         cout << "*";
    //     }
    
    //     for(int col  = 0 ; col <row+1; col++)
    //     {
    //         cout <<"  ";
    //     }
    //       for(int col = 0; col <n-row ; col++){
    //         cout << "*";
    //     }
    //     cout <<endl;
    // }
    
    
    //   for(int row = 0 ; row < n ; row++){
        
    //     for(int col = 0; col <row -1; col++){
    //         cout << "*";
    //     }
    
    //     for(int col  = 0 ; col <n-row; col++)
    //     {
    //         cout <<"  ";
    //     }
    //       for(int col = 0; col <row+1; col++){
    //         cout << "*";
    //     }
    //     cout <<endl;
    // }
    
    
    
    
    //  for(int row = 0 ; row < n ; row++ )
    // {
    //     for(int col = 0 ; col < n-row-1; col++)
    //     {
    //         cout<< " ";
    //     }
    //     for(int col = 0 ; col < row+1  ; col++)
    //     {
    //      if(col == 0 || col == row){
    //          cout << "* ";
    //      } else{
    //          cout << "  ";
    //      }
    //     }
    //     cout <<endl;
    // }
    // for(int row = 0 ; row < n ; row++ )
    // {
    //     for(int col = 0 ; col < row; col++)
    //     {
    //         cout<< " ";
    //     }
    //     for(int col = 0 ; col < n-row  ; col++)
    //     {
    //      if(col == 0 || col == n-row -1){
    //          cout << "* ";
    //      } else{
    //          cout << "  ";
    //      }
    //     }
    //     cout <<endl;
    // }


return 0;
}