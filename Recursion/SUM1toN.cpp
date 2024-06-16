#include <iostream>
using namespace std;


// functional 
int sum(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sum(n - 1);
}

int main() {
    int result = sum(5);
    cout << "The sum of the first 5 numbers is: " << result << endl;
    return 0;
}
