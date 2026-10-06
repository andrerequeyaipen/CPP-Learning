#include <iostream>

int factorial(int n);

int main(){
    std::cout << "Factorial of 5: " << factorial(5);
    return 0;
}

int factorial(int n){
    if(n == 0) return 1; //base case
    return n * factorial(n - 1); //recursive call
}
