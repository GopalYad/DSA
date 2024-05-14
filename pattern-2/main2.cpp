#include <iostream>
using namespace std;
int main()
{
// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 7*8*9*10
// 4*5*6
// 2*3
// 1


      int n;
    cin >> n;

        int m = 1;
    // Print upper half of the pattern
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < 2 * row + 1; col++) {
            if (col % 2 == 0) {
                cout << m;
                m++;
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }

    // Print lower half of the pattern
    int start = m - n;
    for (int row = 0; row < n; row++) {
        int k = start;
        for (int col = 0; col <= n - row-1; col++) {
            cout << k;
            k++;
            if(col < n-row-1){
                cout <<"*";
            }
        }
        start = start - (n - row-1);
        cout << endl;
    }
    return 0;
}