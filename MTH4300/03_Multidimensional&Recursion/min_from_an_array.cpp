#include <iostream>
#include <vector>

int find_min(std::vector<int> arr, int size);

int main(){
    std::vector<int> arr{8, 3, 17, 2, 12, -91};
    std::cout << "The minimum int from the array is: " << find_min(arr, arr.size());
    return 0;
}

int find_min(std::vector<int> arr, int size){
    if(size == 1)   return arr[0];

    int previous_min = find_min(arr, size - 1);

    if(arr[size - 1] < previous_min){
        return arr[size - 1];
    }
    
    return previous_min;
}