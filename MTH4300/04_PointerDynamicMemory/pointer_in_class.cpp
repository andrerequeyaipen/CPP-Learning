// #include <iostream>

// int main(){
//     int x = 42;
//     int *pNumber = &x;
//     *pNumber = 100;
//     std::cout << *pNumber;
//     return 0;
// }

// #include <iostream>
// int main(){
//     int number;
//     std::cout << "Please enter number of students: \n";
//     std::cin >> number;

//     std::string *arr = new std::string[number]; //creating the array in the heap 
//     //std::string students[number]         Wouldn't work since we don't know the number of elements that will go to the call stack function

//     for(int i = 0; i < number; i++){
//         std::cout << "Please enter student " << i + 1 << " name: \n";
//         std::cin >> arr[i];
//     }

//     for(int i = 0; i < number; i++){
//         std::cout << "Student " << i + 1 << " : " << arr[i] << std::endl;
//     }

//     delete[] arr;  //deleting array from a heap only time we use []
//     arr = nullptr;

//     return 0;
// }

#include <iostream>

int main(){
    int rows = 3;
    int cols = 4;

    int **arr = new int*[rows]; //creating 3 empty arrays

    return 0;
}
