#include <iostream>
#include "triple.h"

using namespace std;

// Template addUp function
template <typename T>
T addUp(const Triple<T>& theTriple) {
    return theTriple.getFirst() + theTriple.getSecond() + theTriple.getThird();
}

int main() {
    Triple<int> p1(42, 17, 94);          // Triple of integers
    Triple<double> p2(4.3, 9.5, 1.4);   // Triple of doubles

    cout << "Int Triple: (" << p1.getFirst() << ", " << p1.getSecond() << ", " << p1.getThird() << ")" << endl;
    cout << "Sum: " << addUp(p1) << endl;

    cout << "Double Triple: (" << p2.getFirst() << ", " << p2.getSecond() << ", " << p2.getThird() << ")" << endl;
    cout << "Sum: " << addUp(p2) << endl;

    return 0;
}
