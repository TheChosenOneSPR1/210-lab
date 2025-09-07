#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Color {
    int r;
    int g;
    int b;
};

int main() {
    srand(time(0));  

    int n = rand() % 26 + 25;

    vector<Color> colors;

    for (int i = 0; i < n; i++) {
        Color c;
        c.r = rand() % 256;
        c.g = rand() % 256;
        c.b = rand() % 256;
        colors.push_back(c);
    }

    cout << left << setw(8) << "Color#" 
         << setw(8) << "R" 
         << setw(8) << "G" 
         << setw(8) << "B" << endl;
    cout << "----------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        cout << left << setw(8) << i+1
             << setw(8) << colors[i].r
             << setw(8) << colors[i].g
             << setw(8) << colors[i].b << endl;
    }

    return 0;
}
