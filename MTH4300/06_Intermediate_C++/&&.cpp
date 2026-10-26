#include <iostream>

void modifyvalue(int& value){
    std::cout << "Lvalue reference" << std::endl;
    value = 20;
}

void modifyvalue(int&& value){
    std::cout << "Rvalue reference" << std::endl;
    
}