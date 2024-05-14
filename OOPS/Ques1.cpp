#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int val = 0) : value(val) {}

    // Overload increment (++) operator
    Counter operator++() {
        return Counter(++value);
    }

    // Overload decrement (--) operator
    Counter operator--() {
        return Counter(--value);
    }

    // Display the current value
    void display() {
        std::cout << "Counter value: " << value << std::endl;
    }
};

int main() {
    Counter counter(5);

    // Increment
    ++counter;
    counter.display();  // Output: Counter value: 6

    // Decrement
    --counter;
    counter.display();  // Output: Counter value: 5

    return 0;
}
