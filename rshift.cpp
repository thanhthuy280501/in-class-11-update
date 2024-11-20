#include <iostream>
#include <string>
using namespace std;

//**************************************************************
// Template function for right shift (rotate)
//**************************************************************
template <typename T>
void rshift(T *array, int count) {
    T temp = array[count - 1];       // Store last element
    for (int i = count - 1; i > 0; i--) {
        array[i] = array[i - 1];     // Shift elements
    }
    array[0] = temp;                 // Move last to first
}

int main() {
    int a[5] = {1, 55, 23, 74, 99};     // Array of integers
    string b[3] = {"apple", "banana", "cherry"}; // Array of strings

    cout << "Before shift (int): ";
    for (int i : a) cout << i << " ";
    cout << endl;

    rshift(a, 5);

    cout << "After shift (int): ";
    for (int i : a) cout << i << " ";
    cout << endl;

    cout << "Before shift (string): ";
    for (const auto& s : b) cout << s << " ";
    cout << endl;

    rshift(b, 3);

    cout << "After shift (string): ";
    for (const auto& s : b) cout << s << " ";
    cout << endl;

    return 0;
}
