#include <iostream>
int* remove_duplicates (int arr[], int size, int &newSize);

int main () {
    int arr [] = {4, 2, 4, 7, 2, 9, 7, 5};
    int size = 8;
    int newSize = 0;
    int* result = remove_duplicates(arr , size , newSize);

    for (int i = 0; i < newSize ; i++) {
        std::cout << result [i] << " ";
    }
    std::cout << std::endl ;
    std::cout << "New size : " << newSize << std::endl ;
    
    delete [] result ;
    
    return 0;
}
int* remove_duplicates (int arr[], int size, int &newSize){
    if(size == 0){
        newSize = 0;
        return nullptr;
    }

    int* new_arr = new int[size];

    for(int i = 0; i < size; i++){
        bool isDuplicate = false;
        for(int j = 0; j < newSize; j++){
            if(arr[i] == new_arr[j]){
                isDuplicate = true;
                break;
            }
        }

        if(!isDuplicate){
            new_arr[newSize] = arr[i];
            newSize++;
        }
    }
    return new_arr;
}