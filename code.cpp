#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int* pointer = new int[9];

    for (int i = 0; i < 9; i++) {
        pointer[i] = i + 1;
    }

    cout << pointer[4] << endl;

    delete[] pointer;
}
