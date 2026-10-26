#include <iostream>

// int Fibonacci(int x, int a = 0, int b = 1){
//     if(x == 0){
//         return a;
//     }
//     else if(x == 1){
//         return b;
//     }
//     return Fibonacci(x - 1, b, a + b);
// }

//Another way of doing fibonacci sequence using Recursion Tree
int Fibonacci(int n){
    if(n == 0)  return 0;
    if(n == 1)  return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2); //two recursive calls
}
int main(){

    int num;
    std::cout << "Choose nth Fibonacci Number: \n";
    std::cin >> num;

    std::cout << "The number is: " << Fibonacci(num);
    return 0;
}

//Not efficient if dealing with big numbers or big recursive calls -> use memorization