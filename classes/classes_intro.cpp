#include <iostream>
#include <string>

class Car {
    public:
        std::string brand;
        std::string model;
        int year;

    //constructor to initialize object
    Car(std::string b, std::string m, int y){
        brand = b;
        model = m;
        year = y;
    }

    void displayInfo(){         //fucntion inside the class
        std::cout << "Brand: " << brand << '\n';
        std::cout << "Model: " << model << '\n';
        std::cout << "Year: " << year << '\n';
    }

    //Destructor
    ~Car(){
        std::cout << "Car destroyed: " << brand << " " << model << " " << year << '\n';
    }
};

int main(){
    Car car1("Toyota", "Camry", 2020);
    std::cout << car1.model << '\n'; //printing attribute values
    std::cout << car1.year << '\n';
    car1.displayInfo();
    return 0;
}