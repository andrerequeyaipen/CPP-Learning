#include <iostream>
#include <vector>

int count_occurrences(std::vector<int> arr, int size, int target);

int main(){
    std::vector<int> arr{2, 5, 2, 8, 2, 7};
    int size = arr.size();
    std::cout << count_occurrences(arr, size, 2);
    return 0;
}

int count_occurrences(std::vector<int> arr, int size, int target){

    if(size == 0)   return 0;

    int count = count_occurrences(arr, size - 1, target);
    if(arr[size - 1] == target){
        return 1 + count;
    }
    return count;
}