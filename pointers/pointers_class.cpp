#include <iostream>

int main(){
    int x[3] = {1, 2, 3};
    std::cout << x << '\n'; //prints adress of the array
    std::cout << "Value of x[0]: " << *x << '\n';
    std::cout << "Value of x[1]: " << *(x + 1) << '\n';
    std::cout << "Value of x[2]: " << *(x + 2) << '\n';
    std::cout << "Address of x[0]: " << x << '\n';
    std::cout << "Address of x[1]: " << (x + 1) << '\n';
    std::cout << "Address of x[2]: " << (x + 2) << '\n';
}



//Values inside of arrays are stored as pointers
// int x[3] = {1, 2, 3}
//           ----------  
//     0x02 |  0x03   |   x         the array itself is not stored as a memory address! ARRAY DECAY
//          ----------
//    0x03 |    1    |      x[0] = *x
//         ---------- 
//   0x04 |    2    |      x[1] = *(x+1)
//        ----------
//  0x05 |    3    |     x[2] = *(x+2)
//       ----------
//
//Array Decay - Compiler calculates where the array starts on the fly --it doesn't need to read a pointer variable from memory
//to find it.
