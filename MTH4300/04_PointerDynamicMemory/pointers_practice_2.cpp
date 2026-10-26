#include <iostream>

int main(){
    
    int num_students;
    std::cout << "Enter a # of students: \n";
    std::cin >> num_students;

    std::string *str_arr = new std::string[num_students];

    for(int i = 0; i < num_students; i++){
        std::cout << "Enter student name " << i << " name :";
        std::cin >> str_arr[i];
    }

    for(int i = 0; i < num_students; i++){
        std::cout << str_arr[i] << ", ";
    }
    std:: cout << '\n';

    std::cout << str_arr[1] << '\n';
    std::cout << str_arr << '\n';
    std::cout << *str_arr << '\n';
}