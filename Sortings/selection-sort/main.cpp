// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
void selection_sort(vector <int> &arr){
    //step : select the min elemen and swap
    int n = arr.size();
    for(int i = 0 ;  i <= n-2 ; i++){
        int minIdx = i;
        for(int j = i+1 ; j <n; j++){
            if(arr[j]<arr[minIdx]){
                minIdx = j;
            }
        }
          swap(arr[i], arr[minIdx]);
    }
}
void printArray(const vector<int> &arr) {  // Use const reference for better efficiency
    for (const int &val : arr) {
        cout << val << " ";
    }
    cout << endl;  
}
int main() {
 vector<int>arr = {1,5,8,9,7,3,0};
 selection_sort(arr);
 printArray(arr);
  

    return 0;
}