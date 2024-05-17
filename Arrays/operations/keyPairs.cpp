#include <iostream>
#include <algorithm> // Needed for std::sort

using namespace std;

class Solution {
public:	
    // Function to check if array has 2 elements
    // whose sum is equal to the given value
    bool hasArrayTwoCandidates(int arr[], int n, int x) {
        // Sort the array
        sort(arr, arr + n);
        
        int l = 0;
        int h = n - 1;
        
        // Two-pointer approach
        while (l < h) {
            int currentSum = arr[l] + arr[h];
            
            if (currentSum == x) {
                return true;
            } else if (currentSum > x) {
                h--;
            } else {
                l++;
            }
        }
        
        return false;
    }
};

int main() {
    int Arr[] = {1, 4, 45, 6, 10, 8};
    int N = 6;
    int X = 16;

    Solution solution;
    bool result = solution.hasArrayTwoCandidates(Arr, N, X);
    
    if (result) {
        cout << "Array has two elements with the given sum." << endl;
    } else {
        cout << "Array does not have two elements with the given sum." << endl;
    }
    
    return 0;
}
