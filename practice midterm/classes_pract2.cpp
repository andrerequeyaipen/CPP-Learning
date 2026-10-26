#include <iostream>

class Student {
public:
    std::string name;
    int grade;
    void display() {
        std::cout << name << " has a grade of " << grade << std::endl;
    }
};


int main(){
    Student student1;
    student1.name = "Andre";
    student1.grade = 97;
    student1.display();

    Student* student2 = new Student;
    student2 -> name = "Gianny";
    student2 -> grade = 92;
    student2 -> display();
}