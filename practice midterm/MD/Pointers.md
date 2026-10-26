When a pointer is initialized it is saved in the stack function. By using the dereference symbol (& "ampersand") we are able to hold the address of that variable
```cpp
#include <iostream>

int main(){
    int a = 10;
    int *ptr = &a

    std::cout << *ptr; //will print the variable
    std::cout << ptr; //will print the variable address
}
```

# Dynamic Memory Allocation

```cpp
#include <<iostream>

int main(){
    int *p = new int;
    *p = 10;
    delete p;
    return 0;
}
```
In the following code the pointer lives on the stack, but the actual integer value it points to is allocated on the heap.

Variable P is a pointer that lives within the stack and that holds the address of this new int variable created in the heap. "new int" already returns a memory address.

Disadvantages
- Dangling Pointers
- Memory Leaks
- Crashes

Advantages
- Efficiency - Pointers allow efficient handling of arrays, strings, and large data structures by passing memory addresses instead of copying data

---
## Allocating Arrays Dinamically
```cpp
int main(){
    int* arr = new int[5];
    std::cout << arr[0];
    std::cout << arr;

    delete[] arr; //deleting array stored in the heap
    arr = nullptr;
}
```

The following code demonstrates how a variable called arr was created on the stack function that holds the address of the new array created on the heap.

Explanation: 

The first line would get the actual value from the array created on the heap but the second line would return the address of the array on the heap being more specific the address for the first data type stored

```cpp
#include <iostream>

int main(){

    // Dynamically allocating an array
    int* arr = new int[5];
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 2;
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    delete[] arr;  // Deallocate the array memory
    arr = nullptr; // Avoid dangling pointer

    return 0;
}
```

Explanation:
In this case the for loop created this the values that are to be stored inside the the 5 blocks of memory created on the heap.