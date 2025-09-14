#include <iostream>
using namespace std;

const int SIZE = 5;  

void enterArrayData(double *arr) {
    cout << "Data entry for the array:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "    > Element #" << i << ": ";
        cin >> *(arr + i);  
    }
    cout << "Data entry complete.\n";
}

void outputArrayData(double *arr) {
    cout << "Outputting array elements: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

double sumArray(double *arr) {
    double sum = 0.0;
    for (int i = 0; i < SIZE; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    double *numbers = new double[SIZE];

    enterArrayData(numbers);
    outputArrayData(numbers);

    double total = sumArray(numbers);
    cout << "Sum of values: " << total << endl;

    delete[] numbers; 
    return 0;
}
