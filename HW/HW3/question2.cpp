#include <iostream>

int count_adjacent (int arr[], int size);

int main(){
    int arr[] = {3, 3, 3, 3, 5, 5, 6, 7, 7, 7, 2, 2};
    int size = 12;
    std::cout << count_adjacent (arr, size) << std::endl;
    return 0;
}

int count_adjacent (int arr [], int size){
    if(size <= 1)   return 0;
    int count = count_adjacent(arr, size - 1 );
    if(arr[size - 1] == arr[size - 2]){
        return 1 + count;
    }
    return count;
}