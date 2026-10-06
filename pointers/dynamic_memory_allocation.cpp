#include <iostream>

int main(){
    int *p = new int;
    *p = 10;
    std::cout << "Value: " << *p << '\n';
    std::cout << "Address: " << p << '\n';

    delete p;       //deallocate memory
    p = nullptr;    //avoid dangling pointers by setting it to nullptr

    if(p != nullptr){
        std::cout << "Value: " << *p << '\n';
    }
    else{
        std::cout << "Pointer is null; cannot read value. \n";
    }
    
    std::cout << "Address: " << p << '\n';

    // Dynamically allocating an array
    int * arr = new int[5];    //we allocate exactly the size that we need
    for(int i = 0; i < 5; i++){
        arr[i] = i * 2;
        std::cout << "arr[" << i << "] = " << arr[i] << '\n';
    }

    delete[] arr;
    arr = nullptr
    return 0;
}

// STACK (RAM) Capacity (Fixed and Tiny)        HEAP (FREE RAM)
// +-----------------------+                 +-----------------------+
// |  arr: [ 0x5000 ]      | -------------->| [0]  [1]  [2]  [3]  [4]|
// +-----------------------+                +-----------------------+
//  (8-byte pointer holding                 (20 bytes holding the
//    the heap's address)                      actual integers)

//Pointer is created in the stack holding the address of the heap
//The Heap is where the actual data is being hold.