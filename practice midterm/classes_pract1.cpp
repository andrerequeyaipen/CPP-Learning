#include <iostream>
class IntArray{
    private:
        int size;
        int *arr;
    
    public:
    IntArray(int s){
        size = s;
        std::cout << "Constructor called\n";
        arr = new int[size];
        for(int i = 0; i < size; i++){
            arr[i] = 0;
        }
    }
    void display(){
        for(int i = 0; i < size; i++){
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
    ~IntArray(){
        delete [] arr;
        arr = nullptr;
        size = 0;
        std::cout << "Array destroyed" << std::endl;
    }
};
int main(){
    IntArray arr(10);
    arr.display();
    return 0;
}