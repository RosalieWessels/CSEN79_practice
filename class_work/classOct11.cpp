#include <ostream>
#include <iostream>

using namespace std;

void allocate_array_memory(int *&a, int size) {
    a = new int[size];
}

int main() {
    cout << "Allocating memory for array" << endl;
    int *a;
    int k = 5;
    allocate_array_memory(a, k);
    for (int i = 0; i < k; i++) {
        cout << "Item with index " << i << " is " << a[i] << endl;
    }
}

