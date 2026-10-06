#include <iostream>

int main(){
    int numbers[5] = {1, 2, 3, 4, 5}; // an int holds 4 bytes of memory
    int size = sizeof(numbers)/sizeof(numbers[0]);
    std::cout << "Array size: " << size;
    return 0;
}

// Double: 8 bytes
// String: 32 bytes
// Char: 1 byte
// Boolean: 1 byte
// Integer: 4 bytes