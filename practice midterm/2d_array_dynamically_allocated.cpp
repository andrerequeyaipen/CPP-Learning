#include <iostream>

int main(){
    int rows = 3;
    int cols = 4;

    int** matrix = new int*[rows];
    for(int i = 0; i < rows; i++){
        matrix[i] = new int[cols];
    }
    


    // 1. Delete each individual row array first
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }

    // 2. Finally, delete the array zof pointers itself
    delete[] matrix;
    return 0;
}