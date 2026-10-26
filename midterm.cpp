#include <iostream>

void insert_value(int arr[], int value, int size, int index);

int main(){

    return 0;
}

void insert_value(int arr[], int value, int size, int index){
    for(size; size >= 0; size--){
        if((size - 1) != index){
            arr[size - 1] = arr[size - 2];
            continue;
        }
        else if((size - 1) == index){
            arr[index] = value;
            break;
        }
    }
}