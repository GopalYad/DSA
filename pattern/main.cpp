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

return 0;
}