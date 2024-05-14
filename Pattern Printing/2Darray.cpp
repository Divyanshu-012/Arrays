#include <iostream>
using namespace std;
#include <vector>

int main() {
    // Declare a 2D array
    const int rows = 3;
    const int cols = 4;
    int twoDArray[rows][cols];

    // Initialize the 2D array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            twoDArray[i][j] = i * cols + j;
        }
    }

    // Access elements of the 2D array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << twoDArray[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
