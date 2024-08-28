#include <iostream>
using namespace std;

void variation1(int num[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            cout << num[i] << "," << num[j] << endl; // Add endl for better readability
        }
    }
}

int main() {
    int num[] = {10, 20, 30, 40};
    int size = sizeof(num) / sizeof(num[0]); // More general way to get array size
    variation1(num, size);

    // Uncomment these lines when the other variations are implemented
    // variation2(num, size);
    // variation3(num, size);
    // variation4(num, size);

    return 0;
}
