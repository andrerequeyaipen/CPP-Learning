#include <iostream>

class Array10 {
private:
    int* data;
    int size;
public:
    Array10(int arr[]) { //constructor
        data = new int[10];
        size = 10;
        for(int i = 0; i < size; i++)   data[i] = arr[i];
    }  // Allocate memory
    
    void print(){
        for(int i = 0; i < size; i++){
            std::cout << data[i] << " ";
            std::cout << std::endl;
        }
    }


    ~Array10() { //destructor
        delete[] data;
        data = nullptr;
    }      // Release memory
};

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Array10 dynamic_arr(arr);
    dynamic_arr.print();

    return 0;
}