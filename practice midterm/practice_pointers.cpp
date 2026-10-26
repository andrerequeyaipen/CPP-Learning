#include <iostream>

int main(){
    int num;
    std::cout << "Please enter number of students: \n";
    std::cin >> num;

    std::string *students = new std::string[num];
    for(int i = 0; i < num; i++){
        std::cout << "Enter student name: \n";
        std::cin >> students[i];
    }
    for(int i = 0; i < num; i++){
        std::cout << students[i] << '\n';
    }

    delete [] students; 
    students = nullptr;

    return 0;
}