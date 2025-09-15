#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 3, 3, 4, 5};
    int find = 3;  // number we want to search
    bool isfound = false; // to track if found or not

    for (int i = 0; i < 5; i++) {
        if (arr[i] == find) {
            cout << "Found at index " << i << endl;
            isfound = true;
        }
    }

    if (!isfound) {
        cout << "Not found in the given array" << endl;
    }

    return 0;
}
