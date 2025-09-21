#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;

void displayArray(string *arr) {
    for (int i = 0; i < SIZE; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

string* reverseArray(string *arr) {
    for (int i = 0; i < SIZE / 2; i++) {
        string temp = *(arr + i);
        *(arr + i) = *(arr + (SIZE - 1 - i));
        *(arr + (SIZE - 1 - i)) = temp;
    }
    return arr;
}

int main() {
    string *names = new string[SIZE];

    *(names + 0) = "Janet";
    *(names + 1) = "Jeffe";
    *(names + 2) = "Jin";
    *(names + 3) = "Joe";
    *(names + 4) = "Junio";

    cout << "Original array: ";
    displayArray(names);

    reverseArray(names);

    cout << "Reversed array: ";
    displayArray(names);

