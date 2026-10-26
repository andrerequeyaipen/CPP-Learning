#include <iostream>

int count_occurrences(int arr[], int size, int target);

int main(){
    int arr[] = {2, 5, 2, 8, 2, 7, 5, 2, 10, 7, 5};
    int size = 6;
    std::cout << count_occurrences(arr, size, 2) << std::endl;

    return 0;
}

int count_occurrences(int arr[], int size, int target){
    if(size == 0) return 0;

    int count = count_occurrences(arr, size - 1, target);

    if(arr[size - 1] == target){
        return 1 + count;
    }
    return count;
}