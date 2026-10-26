#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers{1, 2, 3, 4, 5};
    int size_numbers = numbers.size(); //size() function that can be used for vectors only
    std::cout << "The size of the array is: " << size_numbers;
    return 0;
}


// Recursive Sum Function

int recursive_sum(std::vector<int>, int size, int pos);

int main(){
    std::vector<int> arr{1, 2, 3, 4, 5};
    int size = arr.size();
    std::cout << recursive_sum(arr, size, 0);
    return 0;
}

int recursive_sum(std::vector<int> arr, int size, int pos){
    if(pos == size) return 0;  //base case
    return arr[pos] + recursive_sum(arr, size, pos + 1); //recursive function
}

