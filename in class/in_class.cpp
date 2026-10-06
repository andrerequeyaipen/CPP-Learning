// #include <iostream>
// #include <stack>

// int sum_numbers();

// int main(){
//     std::cout << sum_numbers();
//     return 0;
// }

// int sum_numbers(){
//     std::stack<int> numbers;
//     int number;
//     int result = 0;

//     for(int i = 1; i <= 10; i++){
//         std::cout << "Please enter a number: \n";
//         std::cin >> number;
//         numbers.push(number);
//         }

//     while(!numbers.empty()){
//         result += numbers.top();
//         numbers.pop();
//     }

//     return result;
// }

// EASIER WAY
// #include <iostream>

// int main(){
//     int number;
//     int result = 0;
//     for(int i = 1; i <= 10; i++){
//         std::cout << "Enter your number: \n";
//         std::cin >> number;
//         result += number;
//     }
//     std::cout << "The result is " << result;
// }

#include <iostream>

double find_max(double arr[], int size){
    int max = 0;
    for(int i = 0; i < size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

}
int main(){

    double arr[5] = {93, 4, 2,107, 16};
    std::cout << find_max(arr[5], 5);

}