#include <iostream>
using namespace std;
#include <vector>


int main() {
    // Declare a 3D array
    const int x = 2;
    const int y = 3;
    const int z = 4;
    int threeDArray[x][y][z];

    // Initialize the 3D array
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                threeDArray[i][j][k] = i * y * z + j * z + k;
            }
        }
    }

    // Access elements of the 3D array
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << threeDArray[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
