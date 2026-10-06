#include <iostream>

int main(){
    int rows;
    int cols;

    std::cout << "Please enter number of rows: \n";
    std::cin >> rows;
    while(rows <= 0){
        std::cout << "Please enter a valid positive integer greater than zero: \n";
        std::cin >> rows;
    }
    
    std::cout << "Please enter number of columns: \n";
    std::cin >> cols;
    while(cols <= 0){
        std::cout << "Please enter a valid positive integer greater than zero: \n";
        std::cin >> cols;
    }
    std::cout << '\n';

    int** matrix = new int*[rows];

    int count = 1;
    for(int i = 0; i < rows; i++){
        matrix[i] = new int[cols];
        for(int c = 0; c < cols; c++){
            matrix[i][c] = count++;
        }
    }
    for(int r = 0; r < rows; r++){
        for(int c = 0; c < cols; c++){
            std::cout << matrix[r][c] << ' ';
        }
        std::cout << '\n';
    }

    for(int i = 0; i < rows; i++){
        delete[] matrix[i];
        matrix[i] = nullptr;
    }

    delete[] matrix;
    matrix = nullptr;

    return 0;
}

// Question 2
// #include <iostream>

// int sum_arr(int arr[], int size);

// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0; i < size; i++){
//         std::cout << arr[i] << " ";
//     }
//     std::cout << '\n';
//     std::cout << "The sum is: " << sum_arr(arr, size);
//     return 0;
// }

// int sum_arr(int arr[], int size){
//     if(size == 0)    return 0;
//     return arr[size - 1] + sum_arr(arr, size - 1);
// }

//Question 3

// #include <iostream>
// #include <vector>

// bool isRotation(const std::vector<int> arr1, const std::vector<int> arr2, int n);

// int main(){
//     std::vector<int> arr1 = {99, 86, 85, 90};
//     std::vector<int> arr2 = {86, 85, 90, 99};
//     int arr1_size = arr1.size();
//     std::cout << isRotation(arr1, arr2, arr1_size);
//     return 0;
// }

// bool isRotation(const std::vector<int> arr1, const std::vector<int> arr2, int n){
//     for(int k = 0; k < n; k++){
//         if(arr2[k] == arr1[0]){
//             bool match = true;
//             for(int j = 0; j < n; j++){
//                 if(arr1[j] != arr2[(k + j) % n]){
//                     match = false;
//                     break;
//                 }
//             }
//             if(match){
//                 return true;
//             }
//         }
//     }
//     return false;
// }